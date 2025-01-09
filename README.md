<h1 align="center">Evolutionary Tree Application</h1>

<hr>

<h2>Overview</h2>
<p>The <strong>Evolutionary Tree Application</strong> is a desktop application built using Qt, designed to provide users with a seamless interface to explore and view detailed information about various animal species. The application features:</p>
<ul>
  <li>An interactive evolutionary tree.</li>
  <li>Detailed animal cards displaying relevant information.</li>
</ul>
<hr>
<h2>Features</h2>
<ul>
  <li><strong>Search Functionality</strong>: Quickly find animals by their species name using the search bar.</li>
  <li><strong>Animal Cards</strong>: View detailed information about selected animals, including their:
    <ul>
      <li>Nutrition type.</li>
      <li>Class, family, genus, and description.</li>
    </ul>
  </li>
  <li><strong>Interactive Evolutionary Tree</strong>: Navigate the tree to discover animals.</li>
  <li><strong>Responsive UI</strong>: Hide and display animal cards dynamically based on user interactions.</li>
  <li><strong>Customizable Styling</strong>: Nutrition labels are color-coded based on the animal's dietary classification (Carnivore, Herbivore, Omnivore).</li>
</ul>
<hr>
<h2>Prerequisites</h2>
<p>To run this project, ensure you have the following installed:</p>
<ul>
  <li><strong>Qt Creator</strong></li>
  <li><strong>Qt Framework</strong> (Version 6.8.1 or compatible)</li>
  <li><strong>MinGW 64-bit Compiler</strong></li>
  <li>A C++ development environment</li>
</ul>
<hr>
<h2>How to Build and Run</h2>
<h3>1. Clone the Repository</h3>
<pre><code>git clone https://github.com/codingburgas/10grade-christmas-luck-olouxi.git
cd 10grade-christmas-luck-olouxi
</code></pre>

<h3>2. Open Project in Qt Creator</h3>
<ol>
  <li>Launch <strong>Qt Creator</strong>.</li>
  <li>Open the <code>.pro</code> file associated with the project.</li>
</ol>

<h3>3. Build the Project</h3>
<ol>
  <li>Select the appropriate build configuration (e.g., Debug).</li>
  <li>Click on the <strong>Build</strong> button.</li>
</ol>

<h3>4. Prepare the Application</h3>
<ol>
  <li>After the build completes, locate the <code>animalList.txt</code> file in your project folder.</li>
  <li>Copy and paste the file into the <code>build/Desktop_Qt_6_8_1_MinGW_64_bit-Debug</code> directory.</li>
</ol>

<h3>5. Run the Application</h3>
<p>Click the <strong>Run</strong> button in <strong>Qt Creator</strong>.</p>
<hr>
<h2>File Structure</h2>
<ul>
  <li><strong>categories.cpp</strong>: Implements the functionality for displaying and interacting with animal cards.</li>
  <li><strong>mainwindow.cpp</strong>: Handles the main application window and navigation to the evolutionary tree.</li>
  <li><strong>animalList.txt</strong>: Contains detailed information about each species in a semicolon-separated format:</li>
</ul>
<pre><code>Specie;Nutrition;Photo;Description;Class;Family;Genus
</code></pre>
<ul>
  <li><strong>img</strong>: Contains application images such as logos and animal photos.</li>
  <li><strong>ui files</strong>: Define the graphical user interface layout.</li>
  <li><strong>header files</strong>: Struct and function definitions.</li>
</ul>
<hr>
<h2>Technologies Used</h2>
<ul>
  <li><strong>Frontend</strong>: Qt Widgets for UI</li>
  <li><strong>Backend</strong>: C++ for core logic</li>
  <li><strong>Tools</strong>:
    <ul>
      <li><strong>Git & GitHub</strong> for version control</li>
      <li><strong>Figma</strong> for UI design</li>
    </ul>
  </li>
</ul>
<hr>
<h2>Team Members</h2>
<ul>
  <li><strong>Nikita Balandin</strong>: Scrum Master</li>
  <li><strong>Valentin Nikolayenko</strong>: Backend Developer</li>
  <li><strong>Anna Rikova</strong>: Frontend Developer</li>
</ul>
<hr>
<h2>Credits</h2>
<ul>
  <li><strong>Google Slides</strong>: For presentations</li>
  <li><strong>Google Docs</strong>: For detailed documentation</li>
  <li><strong>Figma</strong>: For designing the application interface</li>
</ul>
<hr>
<h2>Future Enhancements</h2>
<ul>
  <li><strong>Expand Animal Database</strong>: Add more species with richer information.</li>
  <li><strong>Enhanced Search</strong>: Implement autocomplete and filtering.</li>
  <li><strong>Add Sorting Algorithms</strong>: Incorporate efficient sorting algorithms for better user experience.</li>
  <li><strong>Tree Interactivity</strong>: Add zoom feature to the evolutionary tree.</li>
</ul>
