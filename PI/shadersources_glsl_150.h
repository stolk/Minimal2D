
static const char* source_vsh_Font = 
"#version 150\n"
"in mediump vec2 position;\n"
"out lowp vec4 clr;\n"
"uniform mediump vec2 rotx;\n"
"uniform mediump vec2 roty;\n"
"uniform mediump vec2 translation;\n"
"uniform lowp vec4 colour;\n"
"void main()\n"
"{\n"
"    gl_Position.x = dot( position, rotx ) + translation.x;\n"
"    gl_Position.y = dot( position, roty ) + translation.y;\n"
"    gl_Position.z = 1.0;\n"
"    gl_Position.w = 1.0;\n"
"    clr = colour;\n"
"}\n";


static const char* source_fsh_Font =
"#version 150\n"
"in  lowp vec4 clr;\n"
"out lowp vec4 fragColor;\n"
"void main()\n"
"{\n"
"    fragColor = clr;\n"
"}\n";


