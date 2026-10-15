/*
 * FUN_10002e5f at 10002e5f
 * uint __stdcall FUN_10002e5f(int param_1, int param_2, int param_3, undefined4 param_4, uint param_5, uint param_6, uint param_7)
 * Address ranges: 10002e5f-10002fa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10002e5f(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
                 uint param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int extraout_ECX;
  void *this;
  undefined4 *puVar6;
  void *this_00;
  uint extraout_EDX;
  uint uVar7;
  
  uVar7 = 0x8876086c;
  uVar3 = FUN_100026b9(param_2);
  if (((char)uVar3 != '\0') && ((int)param_5 < 0x11)) {
    uVar7 = 0x8876086b;
    uVar3 = FUN_100026d2(this_00,extraout_ECX);
    if ((char)uVar3 != '\0') {
      uVar7 = param_7 & 0xff ^ 1 | 0x8876086a;
      puVar4 = FUN_100035d8(this,param_2);
      uVar5 = FUN_100020ae(param_3);
      uVar5 = FUN_1000285a(*(byte **)(puVar4 + 0x130),uVar5);
      if (((char)uVar5 != '\0') ||
         (uVar5 = FUN_1000285a(*(byte **)(puVar4 + 0x138),extraout_EDX), (char)uVar5 != '\0')) {
        if ((param_5 == 0) || ((param_5 == 1 && (param_6 == 0)))) {
LAB_10002f97:
          uVar7 = 0;
        }
        else if (*(int *)(DAT_100dea74 + 2000) == 0) {
          uVar5 = uVar7;
          if (param_5 == 1) {
            puVar6 = &DAT_100deef0;
            if (param_2 != 2) {
              puVar6 = &DAT_100deee4;
            }
            uVar5 = 0;
            if ((uint)puVar6[param_1 * 8] <= param_6) {
              uVar5 = uVar7;
            }
          }
          uVar7 = uVar5;
          if ((uVar7 != 0) && (param_6 == 0)) {
            cVar1 = puVar4[0x148];
            iVar2 = 0;
            while (cVar1 != '\0') {
              if (puVar4[iVar2 + 0x148] == (char)param_5) {
                uVar5 = 0;
                if (*(uint *)(&DAT_100df504 + param_1 * 0x228) == 0) {
                  return uVar7;
                }
                while (*(uint *)(*(int *)(&DAT_100df500 + param_1 * 0x228) + uVar5 * 4) !=
                       (param_5 & 0xff)) {
                  uVar5 = uVar5 + 1;
                  if (*(uint *)(&DAT_100df504 + param_1 * 0x228) <= uVar5) {
                    return uVar7;
                  }
                }
                goto LAB_10002f97;
              }
              cVar1 = puVar4[iVar2 + 0x149];
              iVar2 = iVar2 + 1;
            }
          }
        }
      }
    }
  }
  return uVar7;
}

