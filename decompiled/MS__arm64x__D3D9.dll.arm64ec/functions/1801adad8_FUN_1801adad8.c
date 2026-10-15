/*
 * FUN_1801adad8 at 1801adad8
 * undefined FUN_1801adad8(void)
 * Address ranges: 1801adad8-1801addd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801adad8(float param_1,float param_2,float param_3,float param_4,longlong param_5,
                  int param_6,int param_7,uint param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  cVar5 = *(char *)(*(longlong *)(*(longlong *)(param_5 + 0x130) + 8) + 0x84);
  uVar7 = param_6 + *(int *)(param_5 + 0x3c) * param_7;
  uVar13 = (ulonglong)uVar7;
  uVar14 = (ulonglong)(uVar7 >> 6);
  bVar8 = (*(byte *)(param_5 + (uVar14 + 0x4c) * 8 + ((ulonglong)(uVar7 >> 3) & 7)) >> (uVar13 & 7)
          & 1) != 0;
  local_70 = uVar14;
  if (*(int *)(param_5 + 0x2c) == 0) {
    FUN_1801a4380(*(longlong *)(param_5 + 0x130),1,*(undefined8 *)(param_5 + 0x10));
    bVar8 = (*(byte *)(param_5 + (uVar14 + 0x4e) * 8 + ((ulonglong)(uVar7 >> 3) & 7)) >>
             (uVar13 & 7) & 1) == 0 && bVar8;
  }
  uVar1 = (param_8 & 0xff ^ 1) & (uint)bVar8;
  if (*(char *)(param_5 + 0x24c) == '\0') {
    uVar12 = *(uint *)(&DAT_18022dca0 + (ulonglong)*(uint *)(param_5 + 0x2c) * 4);
  }
  else {
    uVar12 = 1;
  }
  uVar3 = 0xffe00040;
  lVar15 = *(longlong *)(param_5 + 0x7c);
  cVar6 = (&DAT_18022da48)[*(uint *)(param_5 + 0x2c)];
  if (cVar5 == '\0') {
    uVar3 = 0xffe00000;
  }
  uVar11 = 0x18;
  if (cVar5 == '\0') {
    uVar11 = 0;
  }
  uVar4 = *(uint *)(&DAT_18022da80 + (ulonglong)*(uint *)(param_5 + 0x2c) * 4);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(param_5 + 0x74);
  }
  if (uVar1 == 0) {
    local_80 = 0;
    puVar9 = &local_80;
  }
  else {
    puVar9 = (undefined8 *)
             FUN_18020d168(*(undefined8 *)(*(longlong *)(param_5 + 0x58) + 0x1930),auStack_68,
                           *(undefined4 *)(param_5 + 0x220),0);
  }
  uVar2 = *(undefined4 *)(param_5 + 0xa8);
  local_78 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_5 + 0x58) + 0x1930),auStack_60,
                           *(undefined4 *)(param_5 + 0x1d0),0);
  uVar10 = FUN_18020d168(*(undefined8 *)(*(longlong *)(param_5 + 0x58) + 0x1938),auStack_58,
                         *(undefined4 *)(param_5 + 0x90),uVar13);
  FUN_1801a4848(*(float *)(param_5 + 0x244) * param_1,*(float *)(param_5 + 0x248) * param_2,
                *(float *)(param_5 + 0x244) * param_3,*(float *)(param_5 + 0x248) * param_4,param_1,
                param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x130),
                *(undefined4 *)(param_5 + 0x2c),*(undefined4 *)(param_5 + 0x2c),param_6,uVar13,
                param_6,param_7,uVar13,lVar15,0,*(undefined8 *)(param_5 + 0x1b8),
                *(undefined8 *)(param_5 + 0x208),0,uVar10,&DAT_18022cfd8,local_78,puVar9,
                &DAT_18022cfd8,uVar2,0,0,cVar5,
                uVar4 & 0xf |
                (uVar11 | (uVar3 | (uint)(cVar6 == '\0') << 4 | uVar1) << 6 | uVar12 & 7) << 4,1);
  lVar15 = param_5 + local_70 * 8;
  uVar14 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar15 + 0x270 + uVar14) =
       *(byte *)(lVar15 + 0x270 + uVar14) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
  uVar14 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar15 + 0x250 + uVar14) =
       *(byte *)(lVar15 + 0x250 + uVar14) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
  uVar14 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar15 + 0x110 + uVar14) =
       *(byte *)(lVar15 + 0x110 + uVar14) | (byte)(1 << (uVar13 & 7));
  uVar14 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar15 + 0x260 + uVar14) =
       *(byte *)(lVar15 + 0x260 + uVar14) & ((byte)(1 << (uVar13 & 7)) ^ 0xff);
  thunk_FUN_180223bf8(*(longlong *)(param_5 + 0x1c8) + uVar13 * 0x20 + 0x10);
  return;
}

