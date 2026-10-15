/*
 * FUN_180049c28 at 180049c28
 * int __cdecl FUN_180049c28(undefined8 param_1, HMODULE param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 180049c28-180049d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180049c28(undefined8 param_1,HMODULE param_2,uint param_3,longlong param_4,longlong param_5)

{
  DWORD DVar1;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar2;
  
  iVar7 = 1;
  uVar8 = 0;
  if (param_3 != 0) {
    do {
      if (iVar7 == 0) goto LAB_180049d38;
      *(undefined8 *)(param_5 + uVar8 * 8) = 0;
      uVar6 = (uint)*(ushort *)(param_4 + uVar8 * 2);
      if (uVar6 != 0) {
        DVar1 = FUN_180043270(param_2,(LPCWSTR)(ulonglong)uVar6,L"RT_CUSTOM");
        uVar2 = (ulonglong)DVar1;
        puVar3 = FUN_1800432c0(param_2,(LPCWSTR)(ulonglong)*(ushort *)(param_4 + uVar8 * 2),
                               L"RT_CUSTOM");
        if (puVar3 != (undefined8 *)0x0) {
          plVar4 = (longlong *)FUN_1800609d8(0x20);
          if (plVar4 == (longlong *)0x0) {
LAB_180049d0c:
            plVar4 = (longlong *)0x0;
          }
          else {
            *plVar4 = (longlong)&PTR_FUN_180067238;
            plVar4[1] = 0;
            plVar4[2] = 0;
            *(undefined4 *)(plVar4 + 3) = 0;
            puVar5 = (undefined8 *)thunk_FUN_1800609d8(uVar2);
            plVar4[2] = (longlong)puVar5;
            if (puVar5 == (undefined8 *)0x0) {
              *plVar4 = (longlong)&PTR_FUN_180067238;
              thunk_FUN_180060a18((LPVOID)0x0);
              FUN_180060a18(plVar4);
              goto LAB_180049d0c;
            }
            plVar4[1] = uVar2;
            thunk_FUN_180001218(puVar5,puVar3,uVar2);
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          *(longlong **)(param_5 + uVar8 * 8) = plVar4;
          thunk_FUN_180060a18(puVar3);
          if (*(longlong *)(param_5 + uVar8 * 8) != 0) goto LAB_180049d28;
        }
        iVar7 = 0;
      }
LAB_180049d28:
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < param_3);
    if (iVar7 == 0) {
LAB_180049d38:
      uVar8 = 0;
      do {
        plVar4 = *(longlong **)(param_5 + uVar8 * 8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))();
          *(undefined8 *)(param_5 + uVar8 * 8) = 0;
        }
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
      } while (uVar6 < param_3);
    }
  }
  return iVar7;
}

