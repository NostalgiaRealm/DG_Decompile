/*
 * FUN_180078f18 at 180078f18
 * undefined8 __fastcall FUN_180078f18(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180078f18-18007923e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180078f18(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  LPVOID local_68;
  LPVOID pvStack_60;
  undefined8 local_58;
  undefined1 local_50;
  
  local_70 = 1;
  local_78 = 0x200;
  local_88 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  puVar1 = (uint *)(param_3 + 0x20);
  local_80 = local_88;
  iVar7 = FUN_1800ee08c((longlong *)&local_88,*puVar1);
  uVar9 = (ulonglong)*puVar1;
  FUN_1800ee2d0(*puVar1,(longlong *)&local_88,0);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    uVar9 = *(ulonglong *)(param_3 + 0x10);
    *(undefined1 *)(param_3 + 0x53c) =
         *(undefined1 *)((ulonglong)*(uint *)(param_3 + 0x528) + 0x10 + uVar9);
    pbVar2 = (byte *)((ulonglong)*(uint *)(param_3 + 0x528) + 0x10 + uVar9);
    *pbVar2 = *pbVar2 | 7;
  }
  FUN_180087fe4(uVar9,(longlong *)&local_88,param_3);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    *(undefined1 *)((ulonglong)*(uint *)(param_3 + 0x528) + 0x10 + *(longlong *)(param_3 + 0x10)) =
         *(undefined1 *)(param_3 + 0x53c);
  }
  lVar6 = 0;
  do {
    lVar11 = lVar6;
    bVar3 = *(byte *)(lVar11 + 0x10 + *(longlong *)(param_3 + 0x10));
    if ((bVar3 != 0) && (*(char *)(lVar11 + *(longlong *)(param_3 + 0x10)) != -1)) {
      FUN_1800eddec((longlong *)&local_88,3,0x3000065,(ulonglong)((uint)bVar3 << 4 | 0x102002));
    }
    lVar6 = lVar11 + 1;
  } while (lVar11 + 1 != 0x10);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    FUN_1800eddec((longlong *)&local_88,(int)lVar11 - 0xc,0x3000065,0x102072);
  }
  local_50 = 1;
  local_68 = (LPVOID)0x0;
  pvStack_60 = (LPVOID)0x0;
  local_58 = 0x80;
  local_68 = (LPVOID)thunk_FUN_1800fbccc(0x80);
  uVar12 = 0;
  uVar9 = 0;
  pvStack_60 = local_68;
  do {
    if ((*(char *)(uVar9 + 0x10 + *(longlong *)(param_3 + 0x10)) != '\0') &&
       (*(char *)(uVar9 + *(longlong *)(param_3 + 0x10)) != -1)) {
      FUN_180084a50(param_1,param_3,(longlong *)&local_68,(uint)uVar9,0xf,uVar12 | 0x410200);
      uVar12 = uVar12 + 1;
    }
    uVar10 = (uint)uVar9 + 1;
    uVar9 = (ulonglong)uVar10;
  } while (uVar10 < 0x10);
  if (*(char *)(param_3 + 0x53e) != '\0') {
    *(undefined1 *)((ulonglong)*(uint *)(param_3 + 0x528) + 0x10 + *(longlong *)(param_3 + 0x10)) =
         7;
    uVar10 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    cVar4 = *(char *)((ulonglong)*(uint *)(param_3 + 0x528) + 0xde + param_3);
    if ((cVar4 != '\x02') && (cVar4 != '\x03')) {
      FUN_180084a50(param_1,param_3,(longlong *)&local_68,*(uint *)(param_3 + 0x528),7,uVar10);
    }
    FUN_1800edbe0(puVar1,(longlong *)&local_68,0x10,(ulonglong)uVar10);
    FUN_1800edbe0(puVar1,(longlong *)&local_68,0x44,(ulonglong)uVar10);
    FUN_1800edbe0(puVar1,(longlong *)&local_68,0x38,(ulonglong)(uVar12 | 0x310200));
    FUN_1800ec960((longlong)puVar1,uVar10);
  }
  FUN_1800edbe0(puVar1,(longlong *)&local_68,0x3e,0);
  if (*(byte *)(param_3 + 0x59) != 0) {
    FUN_1800eddec((longlong *)&local_88,2,0x2000068,(ulonglong)*(byte *)(param_3 + 0x59));
  }
  FUN_1800ee0e8((longlong *)&local_88,(longlong *)&local_68,iVar7);
  puVar5 = local_88;
  FUN_1800edd90(param_2,local_88,(longlong)local_80 - (longlong)local_88);
  FUN_1800fbcf0(local_68);
  uVar8 = FUN_1800fbcf0(puVar5);
  return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
}

