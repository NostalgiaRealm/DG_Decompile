/*
 * FUN_180014804 at 180014804
 * undefined __fastcall FUN_180014804(longlong * param_1)
 * Address ranges: 180014804-180014882
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014804(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
    puVar3 = (undefined8 *)(lVar1 + lVar2 * 0x28);
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      if ((*(byte *)((longlong)puVar3 + -0xc) & 1) == 0) {
        FUN_1800fbcf0((longlong *)puVar3[-3]);
      }
      else {
        (**(code **)(*(longlong *)puVar3[-3] + 0x10))();
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-5] = 0;
      puVar3[-4] = 0;
      puVar3 = puVar3 + -5;
    }
    FUN_1800fbcf0((longlong *)(lVar1 + -8));
  }
  return;
}

