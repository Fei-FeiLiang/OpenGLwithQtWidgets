#pragma once
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QOpenGLFunctions_4_5_Compatibility>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>

//索引缓冲对象(Element Buffer Object，EBO，也叫Index Buffer Object，IBO)
//QOpenGLWidget窗口上下文
//QOpenGLFunctions访问OpenGL接口，可以不继承作为成员变量使用
class GLElement
        : public QOpenGLWidget
        , protected QOpenGLFunctions_4_5_Compatibility
{
public:
    explicit GLElement(QWidget *parent = nullptr);
    ~GLElement();

protected:
    //【】继承QOpenGLWidget后重写这三个虚函数
    //设置OpenGL资源和状态。在第一次调用resizeGL或paintGL之前被调用一次
    void initializeGL() override;
    //渲染OpenGL场景，每当需要更新小部件时使用
    void paintGL() override;
    //设置OpenGL视口、投影等，每当尺寸大小改变时调用
    void resizeGL(int width, int height) override;

private:
    //使用Qt提供的便捷类
    QOpenGLShaderProgram shaderProgram;
    QOpenGLVertexArrayObject vao;
    QOpenGLBuffer vbo;
    QOpenGLBuffer ebo;
};


