/*
 * FUN_100239a7 at 100239a7
 * int __fastcall FUN_100239a7(int param_1, undefined4 * param_2, undefined4 * param_3, int param_4)
 * Address ranges: 100239a7-10023b05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100239a7(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort in_FPUControlWord;
  uint local_1c;
  uint *local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  undefined1 local_5;
  
  local_14 = param_1;
  local_10 = param_2;
  FUN_10023df9(&local_5);
  FUN_10002949();
  local_18 = &local_1c;
  local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_1c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_1c = (uint)in_FPUControlWord;
    local_c = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar3 = -0x7ff8ffa9;
  if ((param_3 != (undefined4 *)0x0) && (*param_3 = 0, param_4 == 0)) {
    iVar3 = -0x7ff8fff2;
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623b0)[iVar2]) {
        piVar1 = FUN_100225cb(1);
        if (piVar1 == (int *)0x0) goto LAB_10023adf;
        iVar3 = FUN_10026a32(piVar1,local_10);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*piVar1 + 0x20))(local_14,param_3,0);
          if (iVar3 < 0) {
            FUN_10024395(piVar1);
          }
          if (iVar3 == 0) goto LAB_10023adf;
        }
        if (iVar3 == -0x7789fffb) {
          iVar3 = -0x7789fdce;
        }
        (**(code **)(*piVar1 + 0x58))(1);
        goto LAB_10023adf;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    piVar1 = FUN_100225cb(0);
    if (piVar1 != (int *)0x0) {
      iVar3 = FUN_10026a32(piVar1,local_10);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*piVar1 + 0x20))(local_14,param_3,0);
        if (iVar3 < 0) {
          FUN_10024395(piVar1);
        }
        if (iVar3 == 0) goto LAB_10023adf;
      }
      if (iVar3 == -0x7789fffb) {
        iVar3 = -0x7789fdce;
      }
      (**(code **)(*piVar1 + 0x58))(1);
    }
  }
LAB_10023adf:
  FUN_10023e27();
  return iVar3;
}

