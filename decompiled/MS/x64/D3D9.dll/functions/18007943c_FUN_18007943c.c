/*
 * FUN_18007943c at 18007943c
 * undefined1 __fastcall FUN_18007943c(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18007943c-180079618
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18007943c(uint *param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  LPVOID *ppvVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  LPVOID local_78;
  LPVOID pvStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_80 = 1;
  uVar4 = 0x200;
  local_88 = 0x200;
  uVar8 = 0;
  local_98 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  local_90 = local_98;
  iVar3 = FUN_180074870(uVar4,(longlong *)&local_98,param_3);
  puVar7 = local_98;
  if (iVar3 != 0) {
    lVar2 = 0;
    do {
      lVar9 = lVar2;
      bVar1 = *(byte *)(lVar9 + 0x10 + *(longlong *)(param_3 + 0x10));
      ppuVar5 = (undefined8 **)(ulonglong)bVar1;
      if ((bVar1 != 0) && (*(char *)(lVar9 + *(longlong *)(param_3 + 0x10)) != -1)) {
        ppuVar5 = &local_98;
        FUN_1800eddec((longlong *)ppuVar5,4,0x400005f,(ulonglong)((uint)bVar1 << 4 | 0x201002));
      }
      lVar2 = lVar9 + 1;
    } while (lVar9 + 1 != 0x10);
    if (*(int *)(param_3 + 0x528) != -1) {
      ppuVar5 = &local_98;
      FUN_1800eddec((longlong *)ppuVar5,(int)lVar9 - 0xb,0x400005f,0x201072);
    }
    FUN_1800749ac(ppuVar5,(longlong *)&local_98,param_3);
    local_60 = 1;
    local_68 = 0x80;
    local_78 = (LPVOID)0x0;
    pvStack_70 = (LPVOID)0x0;
    local_78 = (LPVOID)thunk_FUN_1800fbccc(0x80);
    local_58 = (undefined8 *)0x0;
    puStack_50 = (undefined8 *)0x0;
    local_48 = 0x80;
    local_40 = 1;
    pvStack_70 = local_78;
    local_58 = (undefined8 *)thunk_FUN_1800fbccc(0x80);
    puStack_50 = local_58;
    FUN_180074b3c(param_1,(longlong *)&local_78,(longlong *)&local_58,param_3);
    FUN_1800edbe0((uint *)(param_3 + 0x20),(longlong *)&local_78,0x3e,0);
    ppvVar6 = &local_78;
    FUN_1800edd90((longlong *)ppvVar6,local_58,(longlong)puStack_50 - (longlong)local_58);
    FUN_1800880c4(ppvVar6,(longlong *)&local_98,param_3);
    FUN_18007bcd8((ulonglong)ppvVar6,param_3,(longlong *)&local_98);
    FUN_180074a78(ppvVar6,(longlong *)&local_98,param_3);
    FUN_1800ee0e8((longlong *)&local_98,(longlong *)&local_78,iVar3);
    puVar7 = local_98;
    FUN_1800edd90(param_2,local_98,(longlong)local_90 - (longlong)local_98);
    uVar8 = 1;
    FUN_1800fbcf0(local_58);
    FUN_1800fbcf0(local_78);
  }
  FUN_1800fbcf0(puVar7);
  return uVar8;
}

