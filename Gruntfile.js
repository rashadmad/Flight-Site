module.exports = function(grunt) {

    // Project configuration.
    grunt.initConfig({
        pkg: grunt.file.readJSON('package.json'),
        uglify: {
            build: {
                src: 'js/custom.js',
                dest: 'js/build/custom.min.js'
            }
        }
        svgstore: {
          options: {
            prefix : 'icon-', // This will prefix each <g> ID
          },
          svg: { // will add and overide the the default xmlns="http://www.w3.org/2000/svg" attribute to the resulting SVG
            viewBox : '0 0 100 100',
            xmlns: 'http://www.w3.org/2000/svg'
          }
        },
         default : {
              files: {
                'img/svg-defs.svg': ['svg/*.svg'],
          }
        }
    });

    // Load the plugin that provides the "uglify" task.
    grunt.loadNpmTasks('grunt-contrib-uglify');

    // Default task(s).
    grunt.registerTask('default', ['uglify']);

    // svg loader
    grunt.loadNpmTasks('grunt-svgstore');

};
