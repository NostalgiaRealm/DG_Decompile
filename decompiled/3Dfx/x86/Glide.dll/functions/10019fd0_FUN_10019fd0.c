/*
 * FUN_10019fd0 at 10019fd0
 * uint __fastcall FUN_10019fd0(int param_1)
 * Address ranges: 10019fd0-1001a057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10019fd0(int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 0x14c);
  bVar3 = FUN_10019efd((byte *)(param_1 + 0x141),cVar1);
  if (!bVar3) {
    bVar3 = FUN_10019efd((byte *)(param_1 + 0x149),cVar1);
    if (!bVar3) {
      uVar4 = 0;
      goto LAB_1001a003;
    }
  }
  uVar4 = 1;
LAB_1001a003:
  *(uint *)(param_1 + 0x218) = uVar4;
  if (uVar4 == 1) {
    uVar4 = FUN_10019f59(param_1 + 0x151);
    uVar4 = (uVar4 & 0xff) + 1;
    *(uint *)(param_1 + 0x218) = uVar4;
    if (uVar4 == 2) {
      uVar4 = FUN_10019f59(param_1 + 0x192);
      uVar4 = uVar4 & 0xff | 2;
      *(uint *)(param_1 + 0x218) = uVar4;
    }
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x33);
  if (uVar2 < uVar4) {
    *(uint *)(param_1 + 0x218) = uVar2;
    uVar4 = uVar2;
  }
  return uVar4;
}

