/*
 * FUN_10012218 at 10012218
 * undefined4 __thiscall FUN_10012218(void * this, longlong * param_1, longlong * param_2, longlong * param_3, longlong * param_4, uint param_5)
 * Address ranges: 10012218-100122bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10012218(void *this,longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
            uint param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)((int)this + 53000);
  if (param_5 < 0xe) {
    lVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
    *param_1 = lVar2 + (ulonglong)(uint)(*(char *)((int)this + param_5 * 4 + 0x3c) * 0x1000);
    lVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
    *param_2 = lVar2 + (ulonglong)(uint)(*(char *)((int)this + param_5 * 4 + 0x3d) * 0x1000);
    lVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
    *param_3 = lVar2 + (ulonglong)(uint)(*(char *)((int)this + param_5 * 4 + 0x3e) * 0x1000);
    lVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
    *param_4 = lVar2 + (ulonglong)(uint)(*(char *)((int)this + param_5 * 4 + 0x3f) * 0x1000);
  }
  return *puVar1;
}

