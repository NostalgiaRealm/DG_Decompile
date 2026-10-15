/*
 * FUN_10043ba0 at 10043ba0
 * undefined __thiscall FUN_10043ba0(void * this, uint param_1, char param_2, uint param_3)
 * Address ranges: 10043ba0-10043c51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10043ba0(void *this,uint param_1,char param_2,uint param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = param_3;
  FUN_10042220(this,0,0,0);
  iVar4 = 0;
  param_3 = param_1;
  uVar6 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  if (param_1 != 0) {
    pbVar2 = (byte *)((int)&param_3 + ((int)uVar6 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar6 & 7));
    iVar5 = 0;
    while( true ) {
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 0) {
        *(undefined4 *)((int)this + 0xfbc8) = *(undefined4 *)(uVar3 + iVar5);
        *(undefined4 *)((int)this + 0x104c) = *(undefined4 *)(uVar3 + 4 + iVar5);
        *(undefined4 *)((int)this + 0x1008) = *(undefined4 *)(uVar3 + 8 + iVar5);
      }
      else {
        *(undefined4 *)((int)this + uVar6 * 4 + 0xfbd0) = *(undefined4 *)(uVar3 + iVar5);
        *(undefined4 *)((int)this + uVar6 * 4 + 0x100c) = *(undefined4 *)(uVar3 + 4 + iVar5);
        *(undefined4 *)((int)this + uVar6 * 4 + 0xfc8) = *(undefined4 *)(uVar3 + 8 + iVar5);
      }
      iVar5 = iVar5 + 0xc;
      *(undefined1 *)((int)this + 0xf66f) = 1;
      iVar4 = iVar4 + 1;
      uVar6 = 0;
      if (param_3 != 0) {
        for (; (param_3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (param_3 == 0) break;
      pbVar2 = (byte *)((int)&param_3 + ((int)uVar6 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar6 & 7));
    }
  }
  if (param_2 != '\0') {
    puVar1 = (undefined4 *)(uVar3 + iVar4 * 0xc);
    *(undefined4 *)((int)this + 0xfbcc) = *puVar1;
    *(undefined4 *)((int)this + 0xfc14) = puVar1[1];
    *(undefined1 *)((int)this + 0xf670) = 1;
  }
  return;
}

