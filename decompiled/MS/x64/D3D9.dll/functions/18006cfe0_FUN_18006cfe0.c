/*
 * FUN_18006cfe0 at 18006cfe0
 * undefined __fastcall FUN_18006cfe0(undefined8 param_1, uint * param_2, longlong * param_3, ulonglong param_4, uint param_5, uint param_6)
 * Address ranges: 18006cfe0-18006d297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006cfe0(undefined8 param_1,uint *param_2,longlong *param_3,ulonglong param_4,uint param_5
                  ,uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  undefined8 local_40;
  
  uVar12 = (uint)param_4;
  uVar5 = 0;
  uVar7 = param_4 >> 0x10 & 0xffff;
  iVar6 = 4;
  iVar8 = 4;
  do {
    uVar13 = (uint)uVar5 & 0xff | 1 << ((uint)uVar7 & 3);
    uVar5 = (ulonglong)uVar13;
    uVar7 = uVar7 >> 2 & 0x3f;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  bVar18 = (byte)(param_5 >> 0x10);
  bVar4 = bVar18;
  uVar17 = 0;
  do {
    uVar16 = uVar17;
    uVar1 = 1 << (bVar4 & 3);
    uVar17 = uVar16 & 0xff | uVar1;
    bVar4 = bVar4 >> 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar20 = 0;
  bVar19 = (byte)(param_6 >> 0x10);
  bVar4 = bVar19;
  uVar15 = 4;
  do {
    uVar14 = uVar15;
    uVar20 = uVar20 & 0xff | 1 << (bVar4 & 3);
    bVar4 = bVar4 >> 2;
    uVar15 = uVar14 - 1;
  } while (uVar15 != 0);
  uVar10 = param_5 & 0xff00ffff;
  uVar9 = uVar12 & 0xff00ffff;
  uVar5 = uVar5 & 0xff;
  uVar15 = (uint)(-(uVar9 != (param_6 & 0xff00ffff)) & 2);
  if (uVar10 == (param_6 & 0xff00ffff)) {
    uVar15 = uVar14;
  }
  bVar4 = 0;
  if (uVar9 == uVar10) {
    bVar4 = (byte)uVar16 | (byte)uVar1;
  }
  cVar11 = (char)uVar15;
  if (cVar11 == '\0') {
    uVar5 = (ulonglong)((uVar20 | uVar13) & 0xff);
  }
  FUN_18006c79c(uVar5,(uint *)&local_40,(longlong)param_2,uVar12,bVar4 | (byte)uVar5);
  uVar2 = local_40;
  FUN_18006c808(param_1,param_2,param_3,0,uVar12,local_40,0,0,'\0');
  uVar12 = (uint)uVar2;
  if ((uVar9 == uVar10) && (uVar12 != 0)) {
    *(byte *)(param_2 + 0xe1) = bVar18;
    param_2[0xe4] = 0xffffffff;
    param_2[0xe7] = 0xffffffff;
    param_2[0xe6] = 0xffffffff;
    param_2[0xe5] = 0xffffffff;
    param_2[0xe0] = uVar12;
    uVar13 = 0;
  }
  else {
    if (cVar11 == '\x01') {
      uVar17 = uVar20 | uVar17;
    }
    puVar3 = FUN_18006c79c((ulonglong)(uVar17 & 0xff),(uint *)&local_40,(longlong)param_2,param_5,
                           (char)uVar17);
    local_40 = *(undefined8 *)puVar3;
    FUN_18006c808(param_1,param_2,param_3,1,param_5,local_40,0,0,'\0');
    uVar13 = (uint)local_40;
  }
  if (cVar11 == '\0') {
    if (uVar12 == 0) {
LAB_18006d235:
      puVar3 = FUN_18006c79c(0xffffffff,(uint *)&local_40,(longlong)param_2,param_6,(char)uVar20);
      FUN_18006c808(param_1,param_2,param_3,2,param_6,*(undefined8 *)puVar3,0,0,'\0');
      return;
    }
    param_2[0xe8] = uVar12;
  }
  else {
    if ((cVar11 != '\x01') || (uVar13 == 0)) goto LAB_18006d235;
    param_2[0xe8] = uVar13;
  }
  *(byte *)(param_2 + 0xe9) = bVar19;
  param_2[0xec] = 0xffffffff;
  param_2[0xef] = 0xffffffff;
  param_2[0xee] = 0xffffffff;
  param_2[0xed] = 0xffffffff;
  return;
}

