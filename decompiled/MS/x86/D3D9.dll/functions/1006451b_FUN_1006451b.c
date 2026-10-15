/*
 * FUN_1006451b at 1006451b
 * int __stdcall FUN_1006451b(int * param_1, int param_2)
 * Address ranges: 1006451b-10064634
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006451b(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = FUN_100c3e60(param_1,*(uint *)(param_2 + 0x18));
  *(uint *)(param_2 + 0x520) = *(uint *)(param_2 + 0x510) >> 0xc & 0xf;
  FUN_100cfed0((int *)(param_2 + 0x534),0,0x300);
  uVar3 = FUN_1006445c((uint)(0x400 / (ulonglong)(uint)(*(int *)(param_2 + 0x51c) << 2)),
                       *(int *)(param_2 + 0x520),
                       (undefined4 *)(*(int *)(param_2 + 0x520) * 0x60 + 0x4d4 + param_2));
  *(undefined4 *)(param_2 + 0x524) = 0;
  uVar5 = 0;
  *(uint *)(param_2 + 0x528) = uVar3;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(param_2 + 0x4dc + uVar5 * 0x10 + *(int *)(param_2 + 0x520) * 0x60);
      if (uVar4 < uVar1) {
        *(uint *)(param_2 + 0x524) = uVar1;
        uVar4 = uVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  bVar6 = (*(uint *)(param_2 + 0x510) & 0x800) != 0;
  uVar3 = 1;
  *(bool *)(param_2 + 0x52d) = bVar6;
  if ((bVar6) && (1 < *(uint *)(param_2 + 0x520))) {
    do {
      FUN_1006445c(*(uint *)(param_2 + 0x524),uVar3,(undefined4 *)(uVar3 * 0x60 + 0x4d4 + param_2));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x520));
  }
  FUN_100c422d(*(uint *)(param_2 + 0x18),param_1);
  return iVar2;
}

