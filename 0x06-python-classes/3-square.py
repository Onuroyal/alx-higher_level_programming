#!/usr/bin/python3
"""Define a class Square."""


class Square:
    """Represent a square."""

    def __init__(self, size=0):
        """Initialize a new square.
        Args:
        size (int): The size of the new square.
        """
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        self.__size = size
    def area(self):
        """Return the current area of the square."""
        return (self.__size * self.__size)
