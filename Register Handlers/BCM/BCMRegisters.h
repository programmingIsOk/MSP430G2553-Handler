/*
 * BCMRegisters.h
 *
 *  Created on: Sep 25, 2023
 *      Author: Jacob
 */

#ifndef CODEBASE_REGISTER_HANDLERS_BCM_BCMREGISTERS_H_
#define CODEBASE_REGISTER_HANDLERS_BCM_BCMREGISTERS_H_

#define SEL_DCOCTL 0x01
#define SEL_BCSCTL1 0x02
#define SEL_BCSCTL2 0x03
#define SEL_BCSCTL3 0x04
#define SEL_IE1 0x05

typedef struct {
    unsigned char DCOCTLcp;
    unsigned char BCSCTL1cp;
    unsigned char BCSCTL2cp;
    unsigned char BCSCTL3cp;
    unsigned char IE1cp;   //
    unsigned char IFG1cp; //other modules use these interrupt registers.
} BCM_Registers;

unsigned char saveRestoreRegisters_BCM(BCM_Registers *ptr, unsigned char saveRestore, unsigned char selRegister);

#endif /* CODEBASE_REGISTER_HANDLERS_BCM_BCMREGISTERS_H_ */
