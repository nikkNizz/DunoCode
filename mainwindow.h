#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "notex.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMainWindow>
#include <QFileDialog>
#include <QVector>

#include <QDragEnterEvent>
#include <QCloseEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QAudioRecorder>
#include <QResizeEvent>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void dragEnterEvent(QDragEnterEvent *event)override;
    void dropEvent(QDropEvent *event) override;

    void eseguifile(QString filePassato);
    void ottinePath(QString);
    QString OS;
    QString VERSIONE;
    private slots:


    void ricarica();
    void scomponi();
    int verificaIf();
    bool verificaVariabili();
    void cercaEsterni();
    void espandiParam();
    void exeBlocco(QString codice);

    QString rigaVera();
    int isNum(QString PARAM);
    QString riduci(QString stry);
    void rivalorizza();
    void ottieniPos(); 

    void esegui();
    void leggi();
    //int cercaElse();

    void addDaysdu();
    void aligndu();
    void asciidu();
    void audiorecdu();
    void battery_osvers_pcname_screensize();
    void breakdu();
    void browserdu();
    void calc();
    void calldu(QString prm);
    void casedu();
    void canc();
    void chopdu();
    void chrdu();
    void clipboardEv();
    void clr_drive_fileInfo_numbox();
    void coldu();
    void command();
    void copy_fromClipboard();
    void countdu();
    void datediff();
    void decimaldu();
    void diagon();
    void dilogdu();
    void diff();
    void drawdu();
    void elsedu();
    void endFunct();
    void endifdu();
    void exitdu();
    void filecopydu();
    void fileDel();
    void fileEvent();
    void fileRead();
    void fileRename();
    void fileWrite();
    void folderdu();
    void funct();
    void getLines();
    void ifdate();
    void ifeq();
    void ifEquiv(); 
    void ifexists();
    void iffloat_ifint(int strN);
    void ifFocus();
    void ifincluded();
    void ifleap();
    void ifmaj_ifmin();
    void ifString();
    void imgfromList();
    void indexofdu();
    void insertdu();
    void keep();
    void lastindexofdu();
    void launchdu();
    void lbl_print();
    void lcase_ucase();
    void lendu();
    void likeform();
    void listafter();
    void listatdu();
    void listchop();
    void listCompare();
    void listedit();
    void listextract();
    void listfilter_match(int pos);
    void listfrom();
    void listfuse();
    void listgroup();
    void listIndex();
    void listinsert();
    void listjoin();
    void listmax();
    void listmid();
    void listRemItems();
    void listremove();
    void listsort();
    void listsum();
    void listSwap();
    void listtotable();
    void mathdu();
    void mem();    
    void midstring(); 
    void moddu();
    void networkdu();
    void nextdu();
    void nextChars();
    void nextItem();
    void nextRow();
    void nextval();
    void no(); 
    void notesdu();
    void notifydu();
    void nowdu();
    void ofweek();
    void oneOf();
    void pathup();
    void picker();
    void pixList();   
    void playwav();
    void powdu();
    void prg();
    void progressdu();
    void qs();
    void randomdu();
    void removedu();
    void repeatdu();
    void replacedu();
    void replaceLine();
    void replfirst();
    void reportdu();
    void reversedu();
    void rightdu();
    void rounddu();
    void screenshot();
    void selectevery();
    void selectjoin();
    void selsearch();
    void selectdu();
    void speakdu();
    void sqrtdu();
    void subdir();
    void substringdu(); 
    void textdu();
    void thispath();
    void tileText();
    void timedu();
    void tohexdu();
    void toprinter();
    void trimdu();  
    void waitdu();
    void windowdu();
    void word();  
    void xwinGeo();  


    //---------------------

    void copyPath(QString src, QString dst);
    void aggiornoAppunti();
    void aggiornaFile();
    void verificaMark();
    QString calcolo(QString expr); 
    QString kalcolo(QString nums);
    void replyFinished(QNetworkReply *reply);
    QString path_Immagini();
  //-----------------------------

    void on_actionEsegui_blocco_3_triggered();

    void on_actionEsegui_blocco_4_triggered();

    void on_actionEnd_triggered();

    void on_actionNuovo_2_triggered();

    void on_actionCopia_contenuto_shell_triggered();

    void on_actionApri_percorso_scripts_triggered();

    void on_actionPulire_triggered();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_actionHelp_triggered();

    void on_action_s_triggered();

    void on_action_t_tab_triggered();

    void on_action_n_new_line_Linux_triggered();

    void on_action_rn_cr_lf_Windows_triggered();

    void on_action_r_carriage_return_2_triggered();

    void on_comboBox_2_activated(const QString &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_action_E_path_separator_triggered();

    void on_action_dragged_path_triggered();

    void on_actionGet_row_number_triggered();

    void on_action_selected_item_triggered();

    void on_pushButton_clicked();

    void on_action_user_user_or_home_path_triggered();

    void on_casella_textChanged();

    void on_actionLoad_backup_triggered();

    void on_actionRun_again_triggered();

    void on_actionDays_of_week_triggered();

    void on_actionMonths_triggered();

    void on_actionAlphabet_triggered();

    void on_actionNumbers_triggered();

    void on_action_include_include_triggered();

    void on_actionHighlight_code_triggered();

    QString formatta(QString rriga);   
    QString evidenzia(QString x);

    void on_pushButton_2_clicked();

    void on_actionShow_2_hovered();

    void on_actionDirettive_102_triggered();

    void on_actionif_else_endif_triggered();

    void on_actionCheck_for_updates_triggered();

    void on_actionInstall_triggered();

    void on_actionZoom_in_triggered();

    void on_actionZoom_out_triggered();

    void on_actionMulti_declaration_triggered();

    void on_actionClean_after_end_triggered();

    void on_actionCities_triggered();

    void on_actionSave_as_html_triggered();

    void on_casella_selectionChanged();

    void on_actionDetect_words_in_find_box_triggered();

    void on_action_triggered();

    void on_action_space_space_triggered();

    void on_actionBrowser_https_duckduckgo_com_triggered();

    void on_actionToggle_comment_selection_triggered();

    void on_actionInsert_date_time_triggered();

    void on_actionSave_as_txt_triggered();

    void on_actionHide_canvas_triggered();

    void on_actionShow_canvas_triggered();

    void on_actionConnect_file_type_to_script_triggered();

    void on_actionRemove_connection_to_script_triggered();

    //  sys
    void leggiConfig();
    void creaConfig();

    void on_actionOpen_config_triggered();

    void on_action_argList_args_from_call_triggered();

    void on_actionShow_last_script_triggered();

    void on_action_version_Duno_version_triggered();

    void on_action_nothing_empty_value_triggered();

protected:
virtual void keyPressEvent(QKeyEvent *ev) override;
void closeEvent(QCloseEvent *) override;
void resizeEvent(QResizeEvent *event) override;

private:
    Ui::MainWindow *ui;

    int riga;
    QVector<QString> direttive;
    QVector<QString> variabili;
    QVector<QString> valori;
    QVector<QString> parametri;
    QVector<QString> assegnazioni;
    QStringList tutteDirettive;
    QString testo;
    QString miopath;
    QString cartellaScript;
    QString dotConfig;
    bool stoeseguendo;
    QString ultimoScript;
    QString valore0;
    QStringList SELF;  // verifica di non essere nella stessa funzione al call>

    int argo;  // 0 min 1 mag
    QTimer *timer1;

    QString inClipboard; // usato anche per fileEvent
    int numCostanti;
    //int ixer;
    QAudioRecorder *audioRecorder= nullptr;

    QString modif_file;
    QString pathDaVerif;
    notex *notes;
    bool evidenziato;
    QStringList eVar;
    int ko;  // conteggio
    QString nbsp;
    bool salvaComeHtml=false;
    bool autoSelezione=true;
    int inizioSelezione, fineSelezione;
    QPixmap canva;
    QString pathPerEvent;
};

#endif // MAINWINDOW_H
