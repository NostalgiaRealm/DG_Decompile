/*
 * FUN_10051a0f at 10051a0f
 * int __stdcall FUN_10051a0f(int * param_1, int param_2)
 * Address ranges: 10051a0f-10051b28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10051a0f(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = FUN_100a160b(param_1,*(uint *)(param_2 + 0x18));
  *(uint *)(param_2 + 0x490) = *(uint *)(param_2 + 0x480) >> 0xc & 0xf;
  FUN_100ada8e((int *)(param_2 + 0x4a4),0,0x300);
  uVar3 = FUN_10051950((uint)(0x400 / (ulonglong)(uint)(*(int *)(param_2 + 0x48c) << 2)),
                       *(int *)(param_2 + 0x490),
                       (undefined4 *)(*(int *)(param_2 + 0x490) * 0x60 + 0x444 + param_2));
  *(undefined4 *)(param_2 + 0x494) = 0;
  uVar5 = 0;
  *(uint *)(param_2 + 0x498) = uVar3;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(param_2 + 0x44c + uVar5 * 0x10 + *(int *)(param_2 + 0x490) * 0x60);
      if (uVar4 < uVar1) {
        *(uint *)(param_2 + 0x494) = uVar1;
        uVar4 = uVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  bVar6 = (*(uint *)(param_2 + 0x480) & 0x800) != 0;
  uVar3 = 1;
  *(bool *)(param_2 + 0x49d) = bVar6;
  if ((bVar6) && (1 < *(uint *)(param_2 + 0x490))) {
    do {
      FUN_10051950(*(uint *)(param_2 + 0x494),uVar3,(undefined4 *)(uVar3 * 0x60 + 0x444 + param_2));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x490));
  }
  FUN_100a19d8(*(uint *)(param_2 + 0x18),param_1);
  return iVar2;
}

