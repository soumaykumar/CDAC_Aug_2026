function ValidateForm()
{
    var name = document.RegistrationForm.Name;
    var email = document.RegistrationForm.Email;
    var mobile = document.RegistrationForm.Mobile;
    var dob = document.RegistrationForm.DOB;
    var gender = document.RegistrationForm.Gender;
    var course = document.RegistrationForm.Course;
    var address = document.RegistrationForm.Address;
    var password = document.RegistrationForm.Password;
    var confirmPassword = document.RegistrationForm.ConfirmPassword;
    var message = document.getElementById("message");
    if(name.value == "")
    {
        alert("Please enter your name.");
        name.focus();
        return false;
    }
    if(email.value == "")
    {
        alert("Please enter your email.");
        email.focus();
        return false;
    }
    if(email.value.indexOf("@") < 1 || email.value.indexOf(".") < 1)
    {
        alert("Please enter a valid email address.");
        email.focus();
        return false;
    }
    if(mobile.value == "")
    {
        alert("Please enter your mobile number.");
        mobile.focus();
        return false;
    }
    if(!/^[0-9]{10}$/.test(mobile.value))
    {
        alert("Please enter a valid 10 digit mobile number.");
        mobile.focus();
        return false;
    }
    if(dob.value == "")
    {
        alert("Please enter your date of birth.");
        dob.focus();
        return false;
    }
    if(gender[0].checked == false && gender[1].checked == false)
    {
        alert("Please select your gender.");
        return false;
    }
    if(course.selectedIndex < 1)
    {
        alert("Please select your course.");
        course.focus();
        return false;
    }
    if(address.value == "")
    {
        alert("Please enter your address.");
        address.focus();
        return false;
    }
    if(password.value == "")
    {
        alert("Please enter your password.");
        password.focus();
        return false;
    }
    if(!/[0-9]/.test(password.value))
    {
        alert("Password must contain at least one digit.");
        password.focus();
        return false;
    }
    if(confirmPassword.value == "")
    {
        alert("Please confirm your password.");
        confirmPassword.focus();
        return false;
    }
    if(password.value != confirmPassword.value)
    {
        alert("Password and Confirm Password are not same.");
        confirmPassword.focus();
        return false;
    }
    message.innerHTML = "Registration Successful! Welcome, " + name.value + ".";
    message.style.color = "green";
    return false;
}
