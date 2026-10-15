/*
 * FUN_18005c050 at 18005c050
 * undefined FUN_18005c050(void)
 * Address ranges: 18005c050-18005c283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005c050(longlong *param_1,uint param_2,int param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  
  if (4 < param_2) {
    return;
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  if (param_2 == 0) {
    return;
  }
  if (10 < param_3 - 1U) {
    return;
  }
  param_2 = param_2 - 1;
  uVar3 = (ulonglong)param_2;
  switch(param_3) {
  case 1:
    if (5 < (uint)param_4) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + uVar3 * 0x34 + 0x844) =
         *(undefined4 *)(&DAT_1802310f0 + (ulonglong)(uint)param_4 * 4);
    break;
  case 2:
    if (5 < (uint)param_4) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + uVar3 * 0x34 + 0x848) =
         *(undefined4 *)(&DAT_1802310f0 + (ulonglong)(uint)param_4 * 4);
    break;
  case 3:
    if (5 < (uint)param_4) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + uVar3 * 0x34 + 0x84c) =
         *(undefined4 *)(&DAT_1802310f0 + (ulonglong)(uint)param_4 * 4);
    break;
  case 4:
    *(float *)((longlong)param_1 + uVar3 * 0x34 + 0x85c) =
         (float)((uint)param_4 >> 0x10 & 0xff) / 255.0;
    *(float *)((longlong)param_1 + uVar3 * 0x34 + 0x860) =
         (float)((uint)param_4 >> 8 & 0xff) / 255.0;
    *(float *)((longlong)param_1 + uVar3 * 0x34 + 0x864) = (float)((uint)param_4 & 0xff) / 255.0;
    *(float *)((longlong)param_1 + (uVar3 + 0x26) * 0x34 + 0xb0) =
         (float)((uint)param_4 >> 0x18) / 255.0;
    break;
  case 5:
    *(bool *)((longlong)param_1 + uVar3 * 8 + 0x819) = param_4 == 2.8026e-45;
    break;
  case 6:
    *(bool *)((longlong)param_1 + uVar3 * 8 + 0x81a) = param_4 == 2.8026e-45;
    break;
  case 7:
    *(bool *)(param_1 + uVar3 + 0x103) = param_4 == 2.8026e-45;
    break;
  case 8:
    fVar4 = 15.99;
    if (((param_4 <= 15.99) && (fVar4 = -16.0, -16.0 <= param_4)) &&
       (fVar4 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
      fVar4 = param_4;
    }
    *(float *)((longlong)param_1 + uVar3 * 0x34 + 0x850) = fVar4;
    break;
  case 9:
    *(char *)((longlong)param_1 + uVar3 * 8 + 0x81b) = SUB41(param_4,0);
    break;
  case 10:
    if (0x10 < (uint)param_4) {
      param_4 = 1.4013e-45;
    }
    *(float *)((longlong)param_1 + uVar3 * 0x34 + 0x854) = param_4;
    break;
  case 0xb:
    uVar2 = 1 << (ulonglong)(param_2 & 0x1f);
    uVar1 = *(uint *)(param_1 + 0x1d3) & (uVar2 ^ 0xffffffff);
    if (param_4 != 0.0) {
      uVar1 = *(uint *)(param_1 + 0x1d3) | uVar2;
    }
    *(uint *)(param_1 + 0x1d3) = uVar1;
    *(undefined1 *)(param_1 + 0x1ed8) = 1;
    param_1 = param_1 + 0x1ed7;
    goto LAB_18005c268;
  }
  param_1 = (longlong *)((longlong)param_1 + 0xf6bc);
LAB_18005c268:
  *(byte *)((longlong)param_1 + (longlong)((int)param_2 >> 3)) =
       *(byte *)((longlong)param_1 + (longlong)((int)param_2 >> 3)) |
       (byte)(1 << (ulonglong)(param_2 & 7));
  return;
}

