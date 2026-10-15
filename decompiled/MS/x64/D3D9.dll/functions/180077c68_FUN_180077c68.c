/*
 * FUN_180077c68 at 180077c68
 * undefined8 __fastcall FUN_180077c68(undefined8 param_1, longlong * param_2, longlong param_3, ulonglong param_4, longlong param_5, uint param_6)
 * Address ranges: 180077c68-180077fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180077c68(undefined8 param_1,longlong *param_2,longlong param_3,ulonglong param_4,
             longlong param_5,uint param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  LPVOID local_78;
  LPVOID pvStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_40 = 1;
  local_48 = 0x200;
  uVar9 = param_4;
  local_58 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  local_50 = local_58;
  iVar3 = FUN_1800ee08c((longlong *)&local_58,*(int *)(param_3 + 0x20));
  local_60 = 1;
  local_78 = (LPVOID)0x0;
  pvStack_70 = (LPVOID)0x0;
  local_68 = 0x80;
  local_78 = (LPVOID)thunk_FUN_1800fbccc(0x80);
  pvStack_70 = local_78;
  FUN_1800ee2d0(*(int *)(param_3 + 0x20),(longlong *)&local_58,0);
  uVar8 = 0;
  if (param_6 != 0) {
    do {
      if (*(char *)(uVar8 + param_4) != '\x11') {
        FUN_1800eddec((longlong *)&local_58,3,0x300005f,
                      (ulonglong)
                      ((uint)*(byte *)(param_5 + (ulonglong)*(byte *)(uVar8 + param_4)) << 4 |
                      0x101002));
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < param_6);
    puVar1 = (uint *)(param_3 + 0x20);
    uVar9 = 0;
    do {
      FUN_1800eddec((longlong *)&local_58,3,0x3000065,
                    (ulonglong)
                    ((uint)*(byte *)(param_5 + (ulonglong)*(byte *)(uVar9 + param_4)) << 4 |
                    0x102002));
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < param_6);
    uVar8 = 0;
    do {
      uVar7 = (uint)uVar8;
      if (*(char *)(uVar8 + param_4) == '\x11') {
        uVar4 = FUN_1800ec8c0((longlong)puVar1,1,'\x01');
        uVar5 = FUN_18007df9c(param_1,(longlong *)&local_78,param_3,3,7);
        FUN_1800edbe0(puVar1,(longlong *)&local_78,0x10,(ulonglong)uVar4);
        FUN_1800edbe0(puVar1,(longlong *)&local_78,0x44,(ulonglong)uVar4);
        uVar9 = (ulonglong)(uVar7 | 0x410200);
        FUN_1800edbe0(puVar1,(longlong *)&local_78,0x38,uVar9);
        if ((uVar5 & 0x3f00) == 0) {
          FUN_1800ec960((longlong)puVar1,uVar5);
        }
      }
      else {
        uVar4 = FUN_18007df9c(param_1,(longlong *)&local_78,param_3,(uint)*(byte *)(uVar8 + param_4)
                              ,*(byte *)(param_5 + (ulonglong)*(byte *)(uVar8 + param_4)));
        uVar9 = (ulonglong)(uVar7 | 0x410200);
        FUN_1800edbe0(puVar1,(longlong *)&local_78,0x36,uVar9);
      }
      FUN_1800ec960((longlong)puVar1,uVar4);
      uVar8 = (ulonglong)(uVar7 + 1);
    } while (uVar7 + 1 < param_6);
  }
  FUN_1800eddec((longlong *)&local_78,1,0x100003e,uVar9);
  if (*(byte *)(param_3 + 0x59) != 0) {
    FUN_1800eddec((longlong *)&local_58,2,0x2000068,(ulonglong)*(byte *)(param_3 + 0x59));
  }
  FUN_1800ee0e8((longlong *)&local_58,(longlong *)&local_78,iVar3);
  puVar2 = local_58;
  FUN_1800edd90(param_2,local_58,(longlong)local_50 - (longlong)local_58);
  FUN_1800fbcf0(local_78);
  uVar6 = FUN_1800fbcf0(puVar2);
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}

