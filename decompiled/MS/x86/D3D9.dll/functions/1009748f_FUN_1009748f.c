/*
 * FUN_1009748f at 1009748f
 * undefined4 __stdcall FUN_1009748f(int param_1, uint param_2)
 * Address ranges: 1009748f-10097581
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009748f(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char local_9 [5];
  
  FUN_10003e40(local_9,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar4 = 0;
  if (*(char *)(param_1 + -0x62f0) == '\0') {
    if (*(int *)(param_1 + 0x5bd8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x5bd8) + 0x274);
    }
    if (uVar1 != param_2) {
      iVar3 = FUN_10098040((void *)(param_1 + 0xc0),&param_2);
      uVar4 = 0x8007000e;
      if (iVar3 != 0) {
        uVar4 = 0;
        FUN_10095e5b((void *)(param_1 + -0x66b4),iVar3);
      }
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
    if (*(int *)(iVar3 + 0x4f9c) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x4f9c) + 0x274);
    }
    if (uVar1 != param_2) {
      iVar2 = FUN_10098040((void *)(param_1 + 0xc0),&param_2);
      uVar4 = 0x8007000e;
      if (iVar2 != 0) {
        uVar4 = 0;
        LOCK();
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        UNLOCK();
        if (*(undefined4 **)(iVar3 + 0x4f9c) != (undefined4 *)0x0) {
          FUN_1009e598(*(undefined4 **)(iVar3 + 0x4f9c));
        }
        *(undefined1 *)(iVar3 + 0xac20) = 1;
        *(int *)(iVar3 + 0x4f9c) = iVar2;
      }
    }
  }
  FUN_10003e89(local_9);
  return uVar4;
}

