/*
 * FUN_100291eb at 100291eb
 * int __stdcall FUN_100291eb(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100291eb-100292f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100291eb(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (param_4 == 0) {
    return -0x7ff8ffa9;
  }
  if (param_2 != 0) {
    return -0x7ffbfef0;
  }
  iVar3 = 0;
LAB_1002921d:
  if (*(int *)(param_1 + 0x48 + iVar3 * 4) == (&DAT_10062350)[iVar3]) goto code_r0x10029226;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x48 + iVar3 * 4) != (&DAT_10062360)[iVar3]) {
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + 0x48 + iVar3 * 4) != (&DAT_10062370)[iVar3]) {
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      piVar1 = FUN_10022545((int *)0x0);
      if (piVar1 == (int *)0x0) {
        return -0x7ff8fff2;
      }
      iVar3 = (**(code **)*piVar1)(piVar1,param_3,param_4);
      if (-1 < iVar3) {
        return iVar3;
      }
      (**(code **)(*piVar1 + 0x24))(1);
      return iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  iVar3 = 0;
  do {
    if (*(int *)(param_3 + iVar3 * 4) != (&DAT_100623b0)[iVar3]) goto LAB_10029274;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  goto LAB_10029270;
code_r0x10029226:
  iVar3 = iVar3 + 1;
  if (iVar3 == 4) goto code_r0x1002922b;
  goto LAB_1002921d;
LAB_10029274:
  uVar2 = 1;
  goto LAB_10029276;
code_r0x1002922b:
  iVar3 = 0;
  do {
    if (*(int *)(param_3 + iVar3 * 4) != (&DAT_100623b0)[iVar3]) goto LAB_10029274;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
LAB_10029270:
  uVar2 = 0;
LAB_10029276:
  piVar1 = FUN_100225cb(uVar2);
  iVar3 = -0x7ff8fff2;
  if ((piVar1 != (int *)0x0) &&
     (iVar3 = (**(code **)(*piVar1 + 0x20))(param_3,param_4,0), iVar3 < 0)) {
    (**(code **)(*piVar1 + 0x58))(1);
  }
  return iVar3;
}

