/*
 * FUN_100957bd at 100957bd
 * undefined4 __stdcall FUN_100957bd(int param_1, int param_2)
 * Address ranges: 100957bd-1009585d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100957bd(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  piVar4 = (int *)(-(uint)(param_2 != 0) & param_2 - 0x4cU);
  uVar3 = 0x8876086c;
  if ((piVar4 == (int *)0x0) || (piVar4[0xf] != 3)) {
    if (*(char *)(iVar1 + -0x62f0) == '\0') {
      uVar2 = FUN_10006899((void *)(iVar1 + -0x66b4),piVar4);
      if ((char)uVar2 != '\0') {
        uVar3 = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + -0x6300) + *(int *)(iVar1 + -0x62f4) * 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      if (*(int **)(iVar1 + 0xaae0) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0xaae0) + 8))();
      }
      *(int **)(iVar1 + 0xaae0) = piVar4;
      *(undefined1 *)(iVar1 + 0xac1e) = 1;
      uVar3 = 0;
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar3;
}

