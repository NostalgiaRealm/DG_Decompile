/*
 * FUN_10004200 at 10004200
 * undefined FUN_10004200(void)
 * Address ranges: 10004200-100043b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10004200(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = -0x7789f794;
  if (param_3 - 1U < 4 && (int)param_6 < 0x11) {
    iVar8 = -0x7789f795;
    uVar5 = FUN_10003770(param_1,param_3);
    if ((uVar5 & 1) != 0) {
      iVar8 = (param_8 & 0xff ^ 1) + 0x8876086a;
      iVar3 = FUN_10004ff0(param_1,param_3);
      uVar4 = FUN_10003020(param_4);
      uVar5 = FUN_10003900(*(undefined4 *)(iVar3 + 0x130),uVar4);
      if (((uVar5 & 1) != 0) ||
         (uVar5 = FUN_10003900(*(undefined4 *)(iVar3 + 0x138),uVar4), (uVar5 & 1) != 0)) {
        if ((param_6 == 0) || (param_6 == 1 && param_7 == 0)) {
LAB_10004394:
          iVar8 = 0;
        }
        else if (*(int *)(DAT_10170ad0 + 2000) == 0) {
          if (param_6 == 1) {
            iVar6 = 0x10170f88;
            if (param_3 != 2) {
              iVar6 = 0x10170f7c;
            }
            if (param_7 < *(uint *)(iVar6 + param_2 * 0x20)) {
              iVar8 = 0;
            }
          }
          if ((iVar8 != 0) && (param_7 == 0)) {
            iVar6 = 0;
            cVar2 = *(char *)(iVar3 + 0x148);
            while (cVar2 != '\0') {
              if ((uint)(byte)((char *)(iVar3 + 0x148))[iVar6] == (param_6 & 0xff)) {
                uVar1 = *(uint *)((int)&DAT_10171598 + param_2 * 0x228 + 4);
                if (uVar1 == 0) {
                  return iVar8;
                }
                uVar7 = 0;
                while (*(uint *)(*(int *)(&DAT_10171598 + param_2 * 0x45) + uVar7 * 4) !=
                       (param_6 & 0xff)) {
                  uVar7 = uVar7 + 1;
                  if (uVar1 <= uVar7) {
                    return iVar8;
                  }
                }
                goto LAB_10004394;
              }
              iVar6 = iVar6 + 1;
              cVar2 = *(char *)(iVar6 + iVar3 + 0x148);
            }
          }
        }
      }
    }
  }
  return iVar8;
}

