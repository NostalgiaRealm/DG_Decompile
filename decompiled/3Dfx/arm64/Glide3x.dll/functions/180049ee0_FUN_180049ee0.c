/*
 * FUN_180049ee0 at 180049ee0
 * undefined4 __cdecl FUN_180049ee0(longlong * param_1, ulonglong param_2, uint param_3, undefined4 param_4, ulonglong param_5, ulonglong param_6, undefined4 param_7, ulonglong param_8)
 * Address ranges: 180049ee0-18004a17f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180049ee0(longlong *param_1,ulonglong param_2,uint param_3,undefined4 param_4,ulonglong param_5,
             ulonglong param_6,undefined4 param_7,ulonglong param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint local_80 [2];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  uint local_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_80[0] = param_3;
  local_78 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  uVar9 = 0;
  if ((char)param_1[10] == '\0') {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar1 == 0) goto LAB_18004a150;
    uVar6 = 0;
    uVar5 = uVar1;
    do {
      uVar2 = uVar5 + uVar6 >> 1;
      uVar7 = (ulonglong)uVar2;
      uVar8 = *(ulonglong *)(*param_1 + uVar7 * 0x18);
      if (uVar8 <= param_2) {
        if (param_2 <= uVar8) break;
        uVar6 = uVar2 + 1;
        uVar7 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar6);
    if (((uint)uVar7 == uVar1) || (*(ulonglong *)(*param_1 + uVar7 * 0x18) != param_2))
    goto LAB_18004a150;
  }
  puVar3 = (undefined4 *)FUN_18004a458(param_1,&local_78);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_4;
    puVar4 = FUN_18004a630((longlong)(puVar3 + 2),local_80);
    if (puVar4 == (ulonglong *)0x0) {
      local_78 = CONCAT44(local_78._4_4_,0xffffffff);
      puVar4 = FUN_18004a630((longlong)(puVar3 + 2),(uint *)&local_78);
      if (puVar4 != (ulonglong *)0x0) {
        uVar9 = *(undefined4 *)((longlong)puVar4 + 0x14);
        uVar7 = (**(code **)(**(longlong **)(*puVar4 + 0x18) + 0x40))();
        if (uVar7 < puVar4[3]) {
          uVar7 = puVar4[1];
          if (param_5 == *puVar4) {
            if (param_6 == uVar7) {
              uVar9 = *(undefined4 *)((longlong)puVar4 + 0x14);
            }
            else if (uVar7 != 0xffffffffffffffff) {
              FUN_18004e830(uVar7 + 8,0);
            }
          }
          else {
            if (uVar7 != 0xffffffffffffffff) {
              FUN_18004e830(uVar7 + 8,0);
            }
            if (param_6 != 0xffffffffffffffff) {
              FUN_18004e830(param_6 + 8,0);
            }
            (**(code **)(**(longlong **)(param_5 + 0x10) + 0x78))
                      (*(longlong **)(param_5 + 0x10),*(undefined8 *)(*puVar4 + 0x18),puVar4[3]);
          }
        }
      }
      local_70 = param_5;
      uStack_68 = param_6;
      local_60 = param_3;
      uStack_5c = param_7;
      local_58 = param_8;
      FUN_18004a6b0((longlong *)(puVar3 + 2),local_80,&local_70);
    }
    else {
      uVar9 = *(undefined4 *)((longlong)puVar4 + 0x14);
      uVar7 = (**(code **)(**(longlong **)(*puVar4 + 0x18) + 0x40))();
      if (uVar7 < puVar4[3]) {
        uVar7 = puVar4[1];
        if (param_5 == *puVar4) {
          if (param_6 == uVar7) {
            uVar9 = *(undefined4 *)((longlong)puVar4 + 0x14);
          }
          else if (uVar7 != 0xffffffffffffffff) {
            FUN_18004e830(uVar7 + 8,0);
          }
        }
        else {
          if (uVar7 != 0xffffffffffffffff) {
            FUN_18004e830(uVar7 + 8,0);
          }
          if (param_6 != 0xffffffffffffffff) {
            FUN_18004e830(param_6 + 8,0);
          }
          (**(code **)(**(longlong **)(param_5 + 0x10) + 0x78))
                    (*(longlong **)(param_5 + 0x10),*(undefined8 *)(*puVar4 + 0x18),puVar4[3]);
        }
      }
      *puVar4 = param_5;
      puVar4[1] = param_6;
      *(uint *)(puVar4 + 2) = param_3;
      *(undefined4 *)((longlong)puVar4 + 0x14) = param_7;
      puVar4[3] = param_8;
    }
  }
LAB_18004a150:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar9;
}

