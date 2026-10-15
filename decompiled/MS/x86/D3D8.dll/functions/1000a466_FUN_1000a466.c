/*
 * FUN_1000a466 at 1000a466
 * undefined8 __thiscall FUN_1000a466(void * this, short param_1, char param_2)
 * Address ranges: 1000a466-1000a4df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __thiscall FUN_1000a466(void *this,short param_1,char param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)((int)this + 0xc);
  local_c = CONCAT31(local_c._1_3_,1);
  uVar5 = 0;
  uVar3 = 0xffffffff;
  do {
    uVar4 = (uint)(byte)(&DAT_100b1780)[uVar5];
    local_8 = *(undefined4 *)((int)this + 0xc);
    uVar2 = uVar3;
    if ((*(byte *)((int)&local_8 + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1) == 0) {
      local_8 = *(undefined4 *)((int)this + 0x10);
      if (((*(byte *)((int)&local_8 + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1) == 0) &&
         (uVar2 = uVar4, *(int *)((int)this + uVar4 * 4 + 0x58) == -1)) break;
      local_8 = *(undefined4 *)((int)this + 0xc);
    }
    uVar5 = uVar5 + 1;
    uVar3 = uVar2;
    uVar4 = 0xffffffff;
  } while (uVar5 < 0x10);
  if (uVar4 != 0xffffffff) {
    uVar3 = uVar4;
  }
  *(int *)((int)this + uVar3 * 4 + 0x58) = (int)param_1;
  if (param_2 != '\0') {
    pbVar1 = (byte *)((int)this + ((int)uVar3 >> 3) + 0x10);
    *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  }
  pbVar1 = (byte *)((int)this + ((int)uVar3 >> 3) + 0x98);
  *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
  return CONCAT44(local_c,uVar3);
}

