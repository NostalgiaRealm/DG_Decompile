/*
 * FUN_1800967f0 at 1800967f0
 * undefined FUN_1800967f0(void)
 * Address ranges: 1800967f0-180096aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800967f0(float param_1,float param_2,float param_3,float param_4,longlong param_5,
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
  longlong lVar14;
  ulonglong uVar15;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  cVar5 = *(char *)(*(longlong *)(*(longlong *)(param_5 + 0x130) + 8) + 0x84);
  uVar7 = param_6 + *(int *)(param_5 + 0x3c) * param_7;
  uVar15 = (ulonglong)uVar7;
  uVar13 = (ulonglong)(uVar7 >> 6);
  bVar8 = (*(byte *)(param_5 + (uVar13 + 0x4c) * 8 + ((ulonglong)(uVar7 >> 3) & 7)) >> (uVar15 & 7)
          & 1) != 0;
  local_98 = uVar13;
  if (*(int *)(param_5 + 0x2c) == 0) {
    FUN_18008db78(*(longlong *)(param_5 + 0x130),1,*(undefined8 *)(param_5 + 0x10));
    bVar8 = (*(byte *)(param_5 + (uVar13 + 0x4e) * 8 + ((ulonglong)(uVar7 >> 3) & 7)) >>
             (uVar15 & 7) & 1) == 0 && bVar8;
  }
  uVar1 = (param_8 & 0xff ^ 1) & (uint)bVar8;
  if (*(char *)(param_5 + 0x24c) == '\0') {
    uVar12 = *(uint *)(&DAT_180231770 + (ulonglong)*(uint *)(param_5 + 0x2c) * 4);
  }
  else {
    uVar12 = 1;
  }
  lVar14 = *(longlong *)(param_5 + 0x7c);
  uVar3 = 0xffe00040;
  cVar6 = (&DAT_180231518)[*(uint *)(param_5 + 0x2c)];
  uVar4 = *(uint *)(&DAT_180231550 + (ulonglong)*(uint *)(param_5 + 0x2c) * 4);
  if (cVar5 == '\0') {
    uVar3 = 0xffe00000;
  }
  uVar11 = 0x18;
  if (cVar5 == '\0') {
    uVar11 = 0;
  }
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(param_5 + 0x74);
  }
  if (uVar1 == 0) {
    local_a8 = 0;
    puVar9 = &local_a8;
  }
  else {
    puVar9 = (undefined8 *)
             FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_5 + 0x58) + 0x1930),auStack_90,
                           *(undefined4 *)(param_5 + 0x220),0);
  }
  uVar2 = *(undefined4 *)(param_5 + 0xa8);
  local_a0 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_5 + 0x58) + 0x1930),auStack_88,
                           *(undefined4 *)(param_5 + 0x1d0),0);
  uVar10 = FUN_1800e7b48(*(undefined8 *)(*(longlong *)(param_5 + 0x58) + 0x1938),auStack_80,
                         *(undefined4 *)(param_5 + 0x90),uVar15);
  FUN_18008e010(*(float *)(param_5 + 0x244) * param_1,*(float *)(param_5 + 0x248) * param_2,
                *(float *)(param_5 + 0x244) * param_3,*(float *)(param_5 + 0x248) * param_4,param_1,
                param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x130),
                *(undefined4 *)(param_5 + 0x2c),*(undefined4 *)(param_5 + 0x2c),param_6,uVar15,
                param_6,param_7,uVar15,lVar14,0,*(undefined8 *)(param_5 + 0x1b8),
                *(undefined8 *)(param_5 + 0x208),0,uVar10,&DAT_180231350,local_a0,puVar9,
                &DAT_180231350,uVar2,0,0,cVar5,
                uVar4 & 0xf |
                (uVar11 | (uVar3 | (uint)(cVar6 == '\0') << 4 | uVar1) << 6 | uVar12 & 7) << 4,1);
  lVar14 = param_5 + local_98 * 8;
  uVar13 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar14 + 0x270 + uVar13) =
       *(byte *)(lVar14 + 0x270 + uVar13) & ((byte)(1 << (uVar15 & 7)) ^ 0xff);
  uVar13 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar14 + 0x250 + uVar13) =
       *(byte *)(lVar14 + 0x250 + uVar13) & ((byte)(1 << (uVar15 & 7)) ^ 0xff);
  uVar13 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar14 + 0x110 + uVar13) =
       *(byte *)(lVar14 + 0x110 + uVar13) | (byte)(1 << (uVar15 & 7));
  uVar13 = (ulonglong)(uVar7 >> 3) & 7;
  *(byte *)(lVar14 + 0x260 + uVar13) =
       *(byte *)(lVar14 + 0x260 + uVar13) & ((byte)(1 << (uVar15 & 7)) ^ 0xff);
  (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_5 + 0x1c8) + uVar15 * 0x20 + 0x10);
  return;
}

