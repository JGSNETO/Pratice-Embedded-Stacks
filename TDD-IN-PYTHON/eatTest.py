import unittest
from eat import eatIsHealthy

class eatTest(unittest.TestCase):

    def test_eat_not_healthy(self):
        self.assertEqual(eatIsHealthy('pizza', False), 'pizza is not healthy')

    def test_eat_healthy(self):
        self.assertEqual(eatIsHealthy('apple', True), 'apple is healthy')

if __name__ == "__main__":
    unittest.main()