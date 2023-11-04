import pygame as pg
import time
import random as rand


class signup:
    def __init__(self):
        self.textInputs = {}
        self.SW = 1300
        self.SH = 700
        self.HH = 70
        self.users = []
        self.passwords = []
        self.temp = []
        self.isButtonClicked = False

        with open("users.txt", "r") as f:
            self.temp = f.read().split("\n")

        for i in range(len(self.temp)):
            self.users.append(self.temp[i].split(",")[0])
            self.passwords.append(self.temp[i].split(",")[1])

        self.run = True

        pg.init()

        self.screen = pg.display.set_mode((self.SW, self.SH))

        self.black = (0, 0, 0)
        self.white = (255, 255, 255)
        self.red = (255, 0, 0)
        self.green = (0, 255, 0)
        self.blue = (0, 0, 255)
        self.lightGreen = (0, 255, 200)
        self.darkGrey = (30, 30, 30)
        self.lightGrey = (200, 200, 200)

        self.username = ""
        self.password = ""
        self.confirm = ""
        self.mouse = pg.mouse.get_pos()
        self.click = pg.mouse.get_pressed()
        
        self.userFlag = False
        self.passFlag = False
        self.confirmFlag = False

        self.headerRect = pg.Rect(0, 0, self.SW, self.HH)

        self.font = "Inter"
        self.size = 40

        pg.display.set_caption("Figma")
        pg.display.set_icon(pg.image.load("icons/logo.png"))

        self.header = [
            {"name": "Echo", "icon": "icons/logo.png"},
            {
                "name": "Home",
                "location": "startingScreen.py",
                "distance": 170,
                "rect": 95,
            },
            {
                "name": "Features",
                "location": "features.py",
                "distance": 320,
                "rect": 135,
            },
            {"name": "About", "location": "about.py", "distance": 510, "rect": 100},
            {"name": "Start Now!", "location": "signup.py"},
        ]

    def Header(self):
        # create a header where the user can navigate through the app and go to different pages
        # the header will be a list of dictionaries
        # each dictionary will have a name and a location except for the first one which will be the logo

        pg.draw.rect(self.screen, self.darkGrey, self.headerRect)

        for i in range(len(self.header)):
            if i == 0:
                # draw logo
                # rescale it to fit the header
                font = pg.font.SysFont(self.font, self.size, bold=True)
                text = font.render(self.header[i]["name"], True, self.white)
                self.screen.blit(text, (45, 20))
            elif i != len(self.header) - 1:
                # draw Button
                pg.draw.rect(
                    self.screen,
                    self.darkGrey,
                    (
                        self.SW / 5 + self.header[i]["distance"],
                        10,
                        self.header[i]["rect"],
                        40,
                    ),
                )
                font = pg.font.SysFont(self.font, self.size, bold=False)
                text = font.render(self.header[i]["name"], True, self.white)
                self.screen.blit(
                    text, (self.SW / 5 + self.header[i]["distance"] + 10, 20)
                )
            else:
                # draw Button
                pg.draw.rect(self.screen, self.darkGrey, (self.SW - 140, 10, 90, 30))
                font = pg.font.SysFont(self.font, self.size)
                text = font.render(self.header[i]["name"], True, self.white)
                self.screen.blit(
                    text, (self.SW - 150, 20)
                )  # dictionary to store text for each text box

    def Screen(self):
        # create a white screen
        while self.run:
            self.screen.fill(self.white)
            self.Header()
            for event in pg.event.get():
                if event.type == pg.QUIT:
                    self.run = False
                    pg.quit()
                    quit()

            mouse = pg.mouse.get_pos()
            click = pg.mouse.get_pressed()

            self.textBox(100, 100, "Create account:", self.black)
            self.textBox(120, 200, "Username:", self.black)
            self.textBox(120, 300, "Password:", self.black)
            self.textBox(120, 400, "Confirm Password:", self.black)
            self.username = self.textInput(
                400, 200, 400, 50, "username", self.username, mouse, click, self.userFlag
            )  # pass identifier "username"
            self.password = self.textInput(
                400, 300, 400, 50, "password", self.password, mouse, click, self.passFlag
            )  # pass identifier "password"
            self.confirm = self.textInput(
                400, 400, 400, 50, "confirm", self.confirm, mouse, click, self.confirmFlag
            )  # pass identifier "confirm"
            self.Button(
                400, 500, 400, 50, "Sign Up", self.lightGreen, self.green, "signup"
            )
            if self.isButtonClicked:
                if self.checkUser(self.username):
                    self.textBox(400, 600, "Username already exists!", self.red)
                    self.isButtonClicked = False
                elif self.password != self.confirm:
                    self.textBox(400, 600, "Passwords do not match!", self.red)
                    self.isButtonClicked = False
                else:
                    with open("users.txt", "a") as f:
                        # append username and password to file
                        f.write(f"\n{self.username},{self.password}")

                    self.isButtonClicked = False
                    # open home page
                    import Homepage
            pg.display.update()
            pg.display.flip()

    def textBox(self, x, y, text="", color=(0, 0, 0)):
        # create a text box with the given dimensions and text
        font = pg.font.SysFont(self.font, self.size)
        text_surface = font.render(text, True, color)
        self.screen.blit(text_surface, (x + 5, y + 5))

    def textInput(
        self,
        x,
        y,
        w,
        h,
        identifier,
        text="",
        mouse=[],
        click=[],
        flag = False
    ):
        # text = self.textInputs.get(
        #     identifier, ""
        # )  # get text for this text box from dictionary
        clear = ""

        text = (
            "mouse pos: " + str(mouse) + " click: " + str(click) + " flag: " + str(flag)
        )
        pg.draw.rect(self.screen, self.black, (x, y, w, h), 2)
        pg.draw.rect(self.screen, self.lightGrey, (x + 2, y + 2, w - 4, h - 4))
        font = pg.font.SysFont(self.font, self.size)
        text_surface = font.render(text, True, self.black)
        self.screen.blit(text_surface, (x + 5, y + 5))

        # check if the user clicks on the text box

        if x < mouse[0] < x + w and y < mouse[1] < y + h:
            if click[0] == 1:
                flag = True
        else:
            if click[0] == 1:
                flag = False

        # while flag:
        # mouse = pg.mouse.get_pos()
        # click = pg.mouse.get_pressed()
        for event in pg.event.get():
            if event.type == pg.QUIT:
                flag = False
                self.run = False
                pg.quit()
                quit()
            # if (
            #     not (x < mouse[0] < x + w and y < mouse[1] < y + h)
            #     and click[0] == 1
            # ):
            #     flag = False
            if event.type == pg.KEYDOWN and flag:
                if event.key == pg.K_BACKSPACE:
                    text = text[:-1]
                elif event.key == pg.K_RETURN or self.isButtonClicked:
                    self.textInputs[
                        identifier
                    ] = text  # store text for this text box in dictionary
                    return text
                else:
                    text += event.unicode

                font = pg.font.SysFont(self.font, self.size - 5)

                pg.draw.rect(self.screen, self.black, (x, y, w, h), 2)
                pg.draw.rect(self.screen, self.lightGrey, (x + 2, y + 2, w - 4, h - 4))
                text_surface = font.render(text, True, self.black)
                self.screen.blit(text_surface, (x + 5, y + 5))

                # pg.display.update()

    def checkUser(self, username):
        for i in range(len(self.users)):
            if username == self.users[i]:
                return True
        return False

    def Button(self, x, y, w, h, text, color, hoverColor, action=None):
        # create a Button with the given dimensions and text
        # check if the user clicks on the Button
        mouse = pg.mouse.get_pos()
        click = pg.mouse.get_pressed()

        if x < mouse[0] < x + w and y < mouse[1] < y + h:
            pg.draw.rect(self.screen, hoverColor, (x, y, w, h))
            if click[0] == 1 and action != None:
                self.isButtonClicked = True
                # if action == "login":
                #     self.login()
                # elif action == "signup":
                #     self.signup()
                # elif action == "back":
                #     self.back()
                # elif action == "exit":
                #     self.exit()
        else:
            pg.draw.rect(self.screen, color, (x, y, w, h))

        font = pg.font.SysFont(self.font, self.size)
        text_surface = font.render(text, True, self.black)
        self.screen.blit(text_surface, (x + 5, y + 5))


test = signup()
test.Screen()
