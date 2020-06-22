#pragma once

#include "event.h"

static std::vector<Event<event_no_args>> events;


static bool map_load_initialized = false;

void initialize_map_load() noexcept;
void add_map_load_event(event_no_args event_function, EventPriority priority = EVENT_PRIORITY_DEFAULT) noexcept;
void remove_map_load_event(event_no_args event_function) noexcept;
