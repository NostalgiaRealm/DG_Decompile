/*
 * FUN_18002e204 at 18002e204
 * undefined __cdecl FUN_18002e204(longlong param_1, undefined8 * param_2)
 * Address ranges: 18002e204-18002e2f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e204(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x31c0);
  FUN_1800437d0((uint *)(lVar3 + 0x12c0));
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1800436a0(lVar3 + 0x12c0,0xc10);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar3 + 0x14c0));
      puVar1[1] = 0xc10;
      puVar4 = (undefined8 *)((longlong)puVar1 + 0x27U & 0xfffffffffffffff8);
      puVar1[2] = puVar4;
      puVar1[3] = param_1;
      thunk_FUN_180001218(puVar4,param_2,0xc00);
      puVar4[0x180] = 0;
      *puVar1 = FUN_18002e2f8;
      *(undefined8 **)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28 + 0x1350) =
           puVar4 + 0x180;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar3 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_18002e2e0;
    }
    *(undefined4 *)(lVar3 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar3 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar3 + 0x14a0);
  *plVar2 = (longlong)param_2;
  plVar2[1] = param_1;
  FUN_18002e2f8(plVar2);
LAB_18002e2e0:
  *(undefined4 *)(lVar3 + 0x12c0) = 0;
  return;
}

