/*
 * FUN_1801b1988 at 1801b1988
 * undefined FUN_1801b1988(void)
 * Address ranges: 1801b1988-1801b1b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b1988(longlong param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x1ac0;
  lVar6 = *(longlong *)(lVar7 + 0x2230);
  uVar2 = FUN_180221e70(lVar7 + 0x1bc0);
  if ((uVar2 & 1) != 0) {
    FUN_18020cc70(lVar6,uVar1,2,*(undefined8 *)(*(longlong *)(lVar7 + 0x1e00) + 0x18),
                  *(undefined8 *)(*(longlong *)(lVar7 + 0x1e08) + 0xb78));
    goto LAB_1801b1adc;
  }
  FUN_180221850(lVar7 + 0x1bc0);
  if (*(char *)(lVar7 + 0x1dc4) == '\0') {
LAB_1801b1a9c:
    plVar4 = *(longlong **)(lVar7 + 0x1da0);
    *plVar4 = lVar7 + 0x900;
    plVar4[1] = lVar6;
    *(undefined4 *)(plVar4 + 2) = uVar1;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 2;
    FUN_1801a7410();
  }
  else {
    puVar3 = (undefined8 *)FUN_1802218b0(lVar7 + 0x1bc0,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_180221bb0(lVar7 + 0x1bc0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar7 + 0x1bc0);
      goto LAB_1801b1a9c;
    }
    FUN_1801042e0(lVar7 + 0x1dc0);
    puVar3[1] = 0x18;
    puVar3[2] = lVar7 + 0x900;
    puVar3[3] = lVar6;
    *(undefined4 *)(puVar3 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 2;
    puVar5 = (undefined8 *)((longlong)puVar3 + 0x2fU & 0xfffffffffffffff8);
    DataMemoryBarrier(2,3);
    *puVar5 = 0;
    *puVar3 = FUN_1801a7410;
    *(undefined8 **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x1dbc) * 0x28 + 0x1c50) = puVar5;
    if (*(char *)(lVar7 + 0x1dc5) != '\0') {
      FUN_180221bb0(lVar7 + 0x1bc0);
      thunk_FUN_180223874(*(undefined8 *)(lVar7 + 0x1c40));
      goto LAB_1801b1adc;
    }
  }
  FUN_180221bb0(lVar7 + 0x1bc0);
LAB_1801b1adc:
  FUN_18021d418(lVar7 + 0x21b8,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

