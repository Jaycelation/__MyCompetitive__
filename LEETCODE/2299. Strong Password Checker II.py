class Solution:
    def strongPasswordCheckerII(self, password: str) -> bool:
        if len(password) < 8:
            return False

        for x, y in zip(password, password[1:]):
            if x == y:
                return False

        hasLower = False
        hasUpper = False
        hasDigit = False
        hasSpecial = False

        for i in password:
            if i.islower():
                hasLower = True
            if i.isupper():
                hasUpper = True
            if i.isdigit():
                hasDigit = True
            if i in "!@#$%^&*()-+":
                hasSpecial = True

        return hasLower and hasUpper and hasDigit and hasSpecial


if __name__ == '__main__':
    sol = Solution()
    result = sol.strongPasswordCheckerII("IloveLe3tcode!")
    print(result)