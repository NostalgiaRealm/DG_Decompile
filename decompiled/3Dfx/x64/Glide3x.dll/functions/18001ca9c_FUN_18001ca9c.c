/*
 * FUN_18001ca9c at 18001ca9c
 * undefined __fastcall FUN_18001ca9c(longlong * param_1)
 * Address ranges: 18001ca9c-18001cb71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ca9c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  lVar2 = *param_1;
  if (iVar1 != 0x17) {
    if (iVar1 == 0x1d) {
      *(undefined4 *)(lVar2 + 0x2c4c) = *(undefined4 *)(lVar2 + 0x2c1c);
      *(undefined4 *)(lVar2 + 0x2c50) = *(undefined4 *)(lVar2 + 0x2c20);
      *(undefined8 *)(lVar2 + 0x2c58) = *(undefined8 *)(lVar2 + 0x2c28);
      *(undefined4 *)(lVar2 + 0x2c60) = *(undefined4 *)(lVar2 + 0x2c30);
      *(undefined4 *)(lVar2 + 0x2c64) = *(undefined4 *)(lVar2 + 0x2c34);
      return;
    }
    if ((iVar1 != 0x1e) && (iVar1 != 0x21)) {
      if (iVar1 != 0x29) {
        return;
      }
      FUN_180021ac4(lVar2 + 0x42a0,0,0);
      FUN_180009de8(lVar2 + 0x42a0);
      *(undefined1 *)(lVar2 + 0x32f0) = 1;
      return;
    }
  }
  if (iVar1 == 0x17) {
    *(undefined4 *)(lVar2 + 0x2c44) = *(undefined4 *)(lVar2 + 0x2c14);
  }
  else if (iVar1 == 0x1e) {
    *(undefined4 *)(lVar2 + 0x2c40) = *(undefined4 *)(lVar2 + 0x2c10);
  }
  else if (iVar1 == 0x21) {
    *(undefined4 *)(lVar2 + 0x2c48) = *(undefined4 *)(lVar2 + 0x2c18);
  }
  return;
}

