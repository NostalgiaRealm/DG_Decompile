/*
 * FUN_10098592 at 10098592
 * uint __stdcall FUN_10098592(int param_1, int param_2)
 * Address ranges: 10098592-10098616
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10098592(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1;
  uVar3 = 0;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  iVar2 = (**(code **)(*(int *)(&DAT_100df2e8)[*(int *)(iVar1 + -0x58c4) * 0x8a] + 0x98))();
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      uVar3 = 0x88760870;
      goto LAB_100985e0;
    }
    if (iVar2 != 4) goto LAB_100985e0;
  }
  uVar3 = 0x88760874;
LAB_100985e0:
  FUN_10003e89((char *)((int)&param_1 + 3));
  if (-1 < (int)uVar3) {
    uVar3 = FUN_1000812b((void *)(iVar1 + -0x66b4),param_2,'\0');
    if ((int)uVar3 < 0) {
      uVar3 = 0x88760868;
    }
  }
  return uVar3;
}

