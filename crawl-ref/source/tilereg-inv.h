#ifdef USE_TILE_LOCAL
#ifndef TILEREG_INV_H
#define TILEREG_INV_H

#include "tilereg-grid.h"

class InventoryRegion : public GridRegion
{
public:
    InventoryRegion(const TileRegionInit &init);

    virtual void update() override;
    virtual int handle_mouse(MouseEvent &event) override;
    virtual bool update_tip_text(string &tip) override;
    virtual bool update_tab_tip_text(string &tip, bool active) override;
    virtual bool update_alt_text(string &alt) override;

    virtual const string name() const override { return "Inventory"; }

protected:
    virtual void pack_buffers() override;
    virtual void draw_tag() override;
    virtual void activate() override;

private:
    bool _is_next_button(int idx);
    bool _is_prev_button(int idx);
    int _real_item_count();
};

#endif
#endif
