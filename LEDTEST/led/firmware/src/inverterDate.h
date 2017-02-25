//********************************************************************* */
//define some global date in here;
#ifndef _INVERTERDATE_H    /* Guard against multiple inclusion */
#define _INVERTERDATE_H
struct microInverterDate
{
    uint8_t voltage[2];
    uint8_t current[3];
    uint8_t energy[4];
    uint8_t fault;
};
#define  microInverterNum  20  //the number of micro inverter is initial to 20.
struct microInverterDateCtrlU
{
    struct microInverterDate  inverterDate[microInverterNum];
    uint8_t index;
};

void show(struct microInverterDate date,uint8_t index);


#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
