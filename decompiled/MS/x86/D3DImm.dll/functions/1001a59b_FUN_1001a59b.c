/*
 * FUN_1001a59b at 1001a59b
 * undefined __thiscall FUN_1001a59b(void * this, byte param_1, uint * param_2)
 * Address ranges: 1001a59b-1001a6cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_1001a59b(void *this,byte param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_14;
  int local_10;
  
  bVar5 = param_1;
  uVar6 = 0xffffffff;
  uVar7 = *(uint *)((int)this + 0x44);
  local_14 = 0xffffffff;
  if ((uVar7 & 1) == 0) {
    uVar6 = *(uint *)((int)this + 0x3c);
  }
  if ((uVar7 & 2) == 0) {
    local_14 = *(uint *)((int)this + 0x40);
  }
  _param_1 = (uint)param_1;
  uVar9 = (int)uVar7 >> 0x1f;
  uVar1 = (&DAT_1006b7d0)[_param_1];
  uVar10 = uVar1 | _param_1 << 0x18;
  *(uint *)((int)this + 0x1c) = uVar10;
  uVar4 = 0;
  if (bVar5 != 0) {
    for (; (bVar5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)((int)this + 0x20) = uVar1;
  local_10 = 0;
  if (bVar5 != 0) {
    (&param_1)[(int)uVar4 >> 3] = (&param_1)[(int)uVar4 >> 3] & ~('\x01' << (uVar4 & 7));
    while( true ) {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_10._0_1_ =
           (byte)local_10 | '\x01' << (*(uint *)this >> ((char)uVar4 * '\x03' & 0x1fU) & 7);
      uVar4 = 0;
      if (_param_1 != 0) {
        for (; (_param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (_param_1 == 0) break;
      (&param_1)[(int)uVar4 >> 3] = (&param_1)[(int)uVar4 >> 3] & ~('\x01' << (uVar4 & 7));
    }
  }
  uVar4 = (&DAT_1006b7d0)[local_10];
  *(uint *)((int)this + 0x18) = uVar4;
  uVar7 = (local_10 << 3 | 0xfffff807U) & uVar7;
  *(uint *)((int)this + 0x44) = uVar7;
  uVar8 = *(uint *)((int)this + 0x28) & uVar9;
  uVar6 = uVar9 & local_14 & uVar6;
  *(uint *)((int)this + 0x38) = uVar9;
  *(uint *)((int)this + 0x34) = uVar6;
  *(uint *)((int)this + 0x30) = uVar8;
  uVar2 = *(uint *)((int)this + 0x10);
  uVar3 = *(uint *)this;
  param_2[1] = *(uint *)((int)this + 4) & uVar4;
  *param_2 = uVar1 & uVar2 & uVar3;
  uVar4 = *(uint *)((int)this + 8);
  param_2[3] = uVar1 & *(uint *)((int)this + 0xc);
  uVar1 = *(uint *)((int)this + 0x2c);
  param_2[2] = uVar10 & uVar4;
  param_2[5] = uVar1 & uVar6;
  param_2[4] = *(uint *)((int)this + 0x24) & uVar8;
  param_2[6] = (uVar9 | 0xc0000000) & *(uint *)((int)this + 0x28);
  param_2[7] = uVar7;
  return;
}

