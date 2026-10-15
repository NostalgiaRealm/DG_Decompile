/*
 * FUN_180051c50 at 180051c50
 * undefined __fastcall FUN_180051c50(longlong * param_1)
 * Address ranges: 180051c50-180051cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051c50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_180049b30(lVar1,0,0,0);
  if (lVar2 == 0) {
    *(undefined8 *)(lVar1 + 0xf7e0) = 0;
  }
  else {
    *(longlong *)(lVar1 + 0xf7e0) = lVar2;
    if (*(int *)(lVar2 + 0x60) == 0x104) {
      bVar4 = true;
      uVar3 = 1;
      goto LAB_180051c9e;
    }
  }
  bVar4 = false;
  uVar3 = 0;
LAB_180051c9e:
  *(undefined1 *)(lVar1 + 0xf688) = 1;
  if (bVar4) {
    bVar4 = *(int *)(lVar1 + 0x6f2c) == 0;
  }
  else {
    bVar4 = *(int *)(lVar1 + 0x6f2c) != 0;
  }
  *(byte *)(lVar1 + 0xf691) = *(byte *)(lVar1 + 0xf691) | bVar4;
  *(undefined4 *)(lVar1 + 0x6f2c) = uVar3;
  *(undefined1 *)(lVar1 + 0xf6c2) = 1;
  return;
}

