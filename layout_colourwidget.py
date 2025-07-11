from PyQt6.QtGui import QColor, QPalette
from PyQt6.QtWidgets import QWidget


class Colour(QWidget):
    def __init__(self, colour):
        super().__init__()
        self.setAutoFillBackground(True)

        palette = self.palette()
        palette.setColor(QPalette.ColorRole.Window, QColor(colour))
        self.setPalette(palette)