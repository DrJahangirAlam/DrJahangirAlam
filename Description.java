public class Profile {

    public static void main(String[] args) {
        // Personal Information
        String name = "Jahangir Alam (Jackie)";
        String chineseName = "石竹";
        String title = "Electronics & Telecommunication Engineer | Programmer | Innovator";
        String tagline = "Passionate about blending electronics and software to create cutting-edge solutions.";

        // About Me
        String background = "Electronics and Telecommunication Engineering student with hands-on experience in programming and embedded systems.";
        String[] skills = {"Python", "C++", "Java", "IoT", "Signal Processing", "System Design"};
        String[] strengths = {"Creative problem-solving", "Leadership", "Strong drive for innovation"};

        // Current Projects
        String[] currentProjects = {
            "Working on innovative IoT-based automation solutions",
            "Exploring advanced telecommunications systems",
            "Enhancing my skills in machine learning and data science"
        };

        // Contact Information
        String linkedIn = "https://www.LinkedIn.com/in/DrJahangirAlam";
        String email = "www.JahangirAlam@qq.com";
        String website = "www.DrJahangirAlam.wordpress.com";

        // Display the Profile
        displayProfile(name, chineseName, title, tagline, background, skills, strengths, currentProjects, linkedIn, email, website);
    }

    public static void displayProfile(String name, String chineseName, String title, String tagline, String background, 
                                       String[] skills, String[] strengths, String[] projects, 
                                       String linkedIn, String email, String website) {
        System.out.println("👋 Hi there, I'm " + name + " (" + chineseName + ")");
        System.out.println(title);
        System.out.println(tagline);
        System.out.println("\n---\n");

        // About Me
        System.out.println("🚀 About Me");
        System.out.println("📚 Background: " + background);
        System.out.println("💻 Skills: " + String.join(", ", skills));
        System.out.println("🌟 Strengths: " + String.join(", ", strengths));
        System.out.println("\n---\n");

        // Current Projects
        System.out.println("🔧 Current Projects");
        for (String project : projects) {
            System.out.println("🔭 " + project);
        }
        System.out.println("\n---\n");

        // Contact Information
        System.out.println("📫 Get in Touch");
        System.out.println("💼 LinkedIn Profile: " + linkedIn);
        System.out.println("📨 Email: " + email);
        System.out.println("🌐 Personal Website: " + website);
        System.out.println("\n---\n");

        // Closing Quote
        System.out.println("\"Technology is not just a tool, it's a path to innovation and impact!\"");
    }
}
