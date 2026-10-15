/*
 * FUN_100aac68 at 100aac68
 * undefined FUN_100aac68(void)
 * Address ranges: 100aac68-100aacd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100aac68(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  piVar1 = (int *)(param_1 + 0x18);
  if (*piVar1 == 0) {
    uVar4 = (ulonglong)(uint)(param_2 * param_3) * 0x1c;
    uVar3 = (undefined4)uVar4;
    if (uVar4 >> 0x20 != 0) {
      uVar3 = 0xffffffff;
    }
    iVar2 = FUN_101322b0(uVar3);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      FUN_101325d0(iVar2,0,((ulonglong)(uint)(param_2 * param_3 * 7) & 0x3fffffff) << 2);
    }
  }
  return *piVar1 != 0;
}

