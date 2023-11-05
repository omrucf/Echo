import pygame as pg
import time
import random as rand


class startingScreen:
    def __init__(self):
        self.SW = 1300
        self.SH = 700
        self.HH = 70

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

        self.headerRect = pg.Rect(0, 0, self.SW, self.HH)

        self.font = "Inter"
        self.size = 40

        pg.display.set_caption("Echo")
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
                # draw button
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
                # draw button
                pg.draw.rect(self.screen, self.darkGrey, (self.SW - 140, 10, 90, 30))
                font = pg.font.SysFont(self.font, self.size)
                text = font.render(self.header[i]["name"], True, self.white)
                self.screen.blit(text, (self.SW - 150, 20))

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
            pg.display.update()


test = startingScreen()
test.Screen()
