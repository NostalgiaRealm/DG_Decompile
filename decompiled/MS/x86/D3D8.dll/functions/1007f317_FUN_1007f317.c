/*
 * FUN_1007f317 at 1007f317
 * undefined4 __stdcall FUN_1007f317(uint param_1, uint * param_2)
 * Address ranges: 1007f317-1007f389
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f317(uint param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar2 = param_2;
  iVar1 = **(int **)(param_1 - 0x4e10);
  uVar4 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    FUN_10003167(*(void **)(*(int *)(iVar1 + 0x2c) + 0xacc),*(int *)(iVar1 + 0xa4),&local_14);
    param_1 = 0;
    cVar3 = (**(code **)(**(int **)(iVar1 + 0x44) + 0x54))
                      (*(undefined4 *)(iVar1 + 8),local_14,local_10,&param_1);
    *puVar2 = (uint)(cVar3 != '\0');
    uVar5 = 0;
    if (*(char *)(iVar1 + 0xb7) != '\0') {
      uVar5 = param_1;
    }
    puVar2[1] = uVar5;
    uVar4 = 0;
  }
  return uVar4;
}

