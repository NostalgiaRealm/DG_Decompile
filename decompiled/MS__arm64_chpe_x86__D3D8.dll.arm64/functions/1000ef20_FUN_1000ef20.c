/*
 * FUN_1000ef20 at 1000ef20
 * undefined FUN_1000ef20(void)
 * Address ranges: 1000ef20-1000f003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1000ef20(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    do {
      bVar2 = *(byte *)(param_2 + 0x9c + uVar5);
      uVar5 = uVar5 + 1;
      uVar4 = (uint)bVar2;
      iVar1 = uVar4 + (uint)bVar2 * 2;
      cVar3 = *(char *)(param_2 + 0x14 + (uint)bVar2 * 8);
      *(uint *)(param_3 + iVar1 * 4) =
           *(int *)(*(int *)(param_1 + 0x57bc + cVar3 * 4) + 4) +
           (uint)*(byte *)(param_2 + 0x17 + uVar4 * 8) * 4 + *(int *)(param_1 + 0x583c + cVar3 * 4);
      *(undefined1 *)(param_3 + 8 + iVar1 * 4) = *(undefined1 *)(param_2 + 0x18 + uVar4 * 8);
      *(undefined1 *)(param_3 + 9 + iVar1 * 4) = *(undefined1 *)(param_2 + 0x15 + uVar4 * 8);
      *(undefined4 *)(param_3 + 4 + iVar1 * 4) = *(undefined4 *)(param_1 + 0x57fc + cVar3 * 4);
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  return 1;
}

