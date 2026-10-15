/*
 * FUN_10008aef at 10008aef
 * uint __fastcall FUN_10008aef(int param_1)
 * Address ranges: 10008aef-10008b76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10008aef(int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 0x151);
  bVar3 = FUN_10008a1c((byte *)(param_1 + 0x146),cVar1);
  if (!bVar3) {
    bVar3 = FUN_10008a1c((byte *)(param_1 + 0x14e),cVar1);
    if (!bVar3) {
      uVar4 = 0;
      goto LAB_10008b22;
    }
  }
  uVar4 = 1;
LAB_10008b22:
  *(uint *)(param_1 + 0x290) = uVar4;
  if (uVar4 == 1) {
    uVar4 = FUN_10008a78(param_1 + 399);
    uVar4 = (uVar4 & 0xff) + 1;
    *(uint *)(param_1 + 0x290) = uVar4;
    if (uVar4 == 2) {
      uVar4 = FUN_10008a78(param_1 + 0x1e4);
      uVar4 = uVar4 & 0xff | 2;
      *(uint *)(param_1 + 0x290) = uVar4;
    }
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x33);
  if (uVar2 < uVar4) {
    *(uint *)(param_1 + 0x290) = uVar2;
    uVar4 = uVar2;
  }
  return uVar4;
}

