/*
 * FUN_1002121e at 1002121e
 * uint * __stdcall FUN_1002121e(uint * param_1, uint * param_2)
 * Address ranges: 1002121e-10021330
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1002121e(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  
  FUN_1005d293((int *)param_1);
  uVar7 = 0;
  uVar4 = 1;
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 5) = 0x400;
  *(undefined2 *)((int)param_1 + 0x17) = 0x300;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *param_1 = uVar1;
  param_1[4] = 1;
  param_1[1] = 0;
  uVar2 = 0x10;
  *(undefined1 *)((int)param_1 + 0x16) = 0x10;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[3] = 0x10;
  if ((uVar1 & 2) != 0) {
    param_1[0xf] = 0x4040400;
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(undefined1 *)((int)param_1 + 0x9d) = 5;
    param_1[2] = param_1[2] + 1;
    param_1[3] = param_1[3] + (uint)*(byte *)((int)param_1 + 0x3e);
    uVar4 = param_1[2];
    uVar2 = param_1[3];
  }
  if ((uVar1 & 4) != 0) {
    *(undefined1 *)((int)param_1 + 0x46) = 4;
    *(char *)((int)param_1 + 0x47) = (char)(uVar2 >> 2);
    *(undefined2 *)(param_1 + 0x11) = 0x400;
    *(undefined2 *)(param_1 + 0x12) = 4;
    *(undefined1 *)(uVar4 + 0x9c + (int)param_1) = 6;
    param_1[2] = param_1[2] + 1;
    param_1[3] = param_1[3] + (uint)*(byte *)((int)param_1 + 0x46);
  }
  do {
    bVar3 = (byte)uVar7;
    if ((uVar1 & 8 << (bVar3 & 0x1f)) != 0) {
      *(undefined1 *)(param_1 + uVar7 * 2 + 0x13) = 0;
      iVar6 = (uVar1 >> (bVar3 * '\x02' + 0x12 & 0x1f) & 3) + 1;
      cVar5 = (char)iVar6;
      *(char *)((int)param_1 + uVar7 * 8 + 0x4d) = cVar5;
      *(char *)((int)param_1 + uVar7 * 8 + 0x4e) = cVar5 << 2;
      *(char *)((int)param_1 + uVar7 * 8 + 0x4f) = (char)(param_1[3] >> 2);
      *(undefined1 *)(param_1 + uVar7 * 2 + 0x14) = (&stack0xffffffe8)[iVar6 * 4];
      *(undefined1 *)((int)param_1 + uVar7 * 8 + 0x51) = 0;
      *(byte *)((int)param_1 + param_1[2] + 0x9c) = bVar3 + 7;
      param_1[2] = param_1[2] + 1;
      param_1[3] = param_1[3] + (uint)*(byte *)((int)param_1 + uVar7 * 8 + 0x4e);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  return param_1;
}

