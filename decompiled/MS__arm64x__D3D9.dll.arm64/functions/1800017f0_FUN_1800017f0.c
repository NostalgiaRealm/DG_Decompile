/*
 * FUN_1800017f0 at 1800017f0
 * undefined FUN_1800017f0(void)
 * Address ranges: 1800017f0-180001923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800017f0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  longlong local_50 [2];
  
  plVar6 = DAT_18024de60;
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x6820;
  }
  uVar3 = (**(code **)(*DAT_18024de60 + 0x50))(DAT_18024de60,&DAT_180229458);
  uVar8 = 0;
  while( true ) {
    if (uVar3 <= uVar8) {
      uVar8 = 0;
      bVar7 = 1;
      while( true ) {
        if (*(uint *)(param_1 + 0x6830) <= uVar8) {
          return bVar7;
        }
        puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x6828) + (ulonglong)uVar8 * 8);
        bVar2 = (**(code **)*puVar5)(puVar5,lVar1);
        bVar7 = bVar2 & bVar7;
        if (bVar7 == 0) break;
        uVar8 = uVar8 + 1;
      }
      while (uVar8 != 0) {
        uVar8 = uVar8 - 1;
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6828) + (ulonglong)uVar8 * 8);
        (**(code **)(*plVar6 + 8))(plVar6,lVar1);
      }
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x6828));
      *(undefined8 *)(param_1 + 0x6828) = 0;
      *(undefined8 *)(param_1 + 0x6830) = 0;
      return 0;
    }
    local_50[0] = (**(code **)(*plVar6 + 0x58))(plVar6,&DAT_180229458,uVar8);
    if ((local_50[0] == 0) || (uVar4 = FUN_180006748(param_1 + 0x6828,local_50), (uVar4 & 1) == 0))
    break;
    uVar8 = uVar8 + 1;
  }
  return 0;
}

