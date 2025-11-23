class Roommate:
    def __init__(self, name, age, home, school, family, hobbies):
        self.name = name
        self.age = age
        self.home = home
        self.school = school
        self.family = family
        self.hobbies = hobbies

    def display_info(self):
        print("Roommate Information:")
        print("---------------------")
        print(f"Name: {self.name}")
        print(f"Age: {self.age} years old")
        print(f"Home: {self.home}")
        print(f"School: {self.school}")
        print(f"Family: {self.family}")
        print("Hobbies: " + ", ".join(self.hobbies))


# Example usage
rm = Roommate(
    name="John Doe",
    age=22,
    home="Nairobi, Kenya",
    school="Juja University",
    family="Lives with parents and two siblings",
    hobbies=["Football", "Reading", "Coding", "Music"]
)

rm.display_info()

