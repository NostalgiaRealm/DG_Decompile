/*
 * FUN_1002d2e6 at 1002d2e6
 * uint * __thiscall FUN_1002d2e6(void * this, uint * param_1, uint param_2, uint param_3)
 * Address ranges: 1002d2e6-1002d409
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_1002d2e6(void *this,uint *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 < param_3) {
    uVar2 = *(ushort *)((int)this + 10);
    uVar7 = *(uint *)((int)this + 0x18);
    uVar9 = (uint)*(ushort *)((int)this + 8);
    uVar6 = *(uint *)((int)this + 0x10);
    uVar4 = (param_2 << 0xc) / uVar6;
    param_1[1] = uVar4;
    uVar8 = (param_2 << 0xc) % uVar6;
    uVar5 = (param_3 << 0xc) / uVar6;
    param_1[3] = uVar5;
    uVar3 = (ulonglong)(param_3 << 0xc) % (ulonglong)uVar6;
    if (uVar7 == 0) {
      bVar1 = *(byte *)((int)this + 0x1e);
      param_3 = uVar8 / bVar1;
      *param_1 = param_3;
      uVar6 = (uint)(uVar3 / (uint)bVar1);
      uVar7 = (uint)uVar2;
    }
    else {
      param_3 = uVar8 / uVar7;
      *param_1 = param_3;
      uVar6 = (uint)(uVar3 / uVar7);
      uVar9 = uVar9 / *(byte *)((int)this + 0x1c);
      uVar7 = (uint)uVar2 / (uint)*(byte *)((int)this + 0x1d);
      if (uVar9 == 0) {
        uVar9 = 1;
      }
      if (uVar7 == 0) {
        uVar7 = 1;
      }
    }
    param_1[2] = uVar6;
    if (uVar9 < param_3) {
      uVar4 = uVar4 + 1;
      *param_1 = 0;
      param_1[1] = uVar4;
    }
    if (uVar9 < uVar6) {
      param_1[2] = uVar9;
      uVar6 = uVar9;
    }
    if (uVar7 <= uVar4) {
      param_1[1] = uVar7;
    }
    if (uVar7 <= uVar5) {
      uVar5 = uVar7 - 1;
      param_1[2] = uVar9;
      param_1[3] = uVar5;
      uVar6 = uVar9;
    }
    if (uVar6 == 0) {
      param_1[2] = uVar9;
      param_1[3] = uVar5 - 1;
    }
  }
  return param_1;
}

