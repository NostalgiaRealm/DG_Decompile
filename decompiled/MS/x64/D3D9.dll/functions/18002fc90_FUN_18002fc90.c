/*
 * FUN_18002fc90 at 18002fc90
 * undefined __fastcall FUN_18002fc90(undefined8 * param_1)
 * Address ranges: 18002fc90-18002fce6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002fc90(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_180101100;
  if ((HGDIOBJ)param_1[0xb] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0xb]);
    param_1[0xb] = 0;
    param_1[0x10] = 0;
  }
  (**(code **)(*(longlong *)param_1[2] + 0x20))();
  *param_1 = &PTR_LAB_180101660;
  FUN_1800fbcf0((LPVOID)param_1[3]);
  return;
}

