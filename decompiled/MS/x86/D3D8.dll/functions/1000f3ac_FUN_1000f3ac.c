/*
 * FUN_1000f3ac at 1000f3ac
 * undefined4 __thiscall FUN_1000f3ac(void * this, undefined4 param_1, undefined4 * param_2)
 * Address ranges: 1000f3ac-1000f3f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000f3ac(void *this,undefined4 param_1,undefined4 *param_2)

{
  POINT Point;
  HWND pHVar1;
  HWND pHVar2;
  undefined4 uVar3;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  GetCursorPos(&local_c);
  Point.y = local_c.y;
  Point.x = local_c.x;
  pHVar1 = WindowFromPoint(Point);
  uVar3 = 0;
  if (pHVar1 != (HWND)0x0) {
    pHVar2 = (HWND)(**(code **)(*(int *)((int)this + -0x28) + 0x14))();
    if (pHVar1 == pHVar2) {
      uVar3 = 1;
      *(undefined4 *)((int)this + -0x10) = param_1;
    }
  }
  *param_2 = uVar3;
  return 0;
}

